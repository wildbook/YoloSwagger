#pragma once
#incldue "../client.hpp"
#include "LolClashRosterStats.hpp"
namespace leagueapi {
  LolClashRosterStats_t GetLolClashV1RosterByRosterIdStats (const ClientInfo& info,
    const int64_t_t& rosterId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-clash/v1/roster/"+UrlCode::encode(to_string(rosterId))+"/stats";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
