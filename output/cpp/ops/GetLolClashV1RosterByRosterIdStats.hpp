#pragma once
#include "../client.hpp"
#include "LolClashRosterStats.hpp"
namespace leagueapi {
  LolClashRosterStats_t GetLolClashV1RosterByRosterIdStats (const ClientInfo& info,
    const int64_t& rosterId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-clash/v1/roster/"+UrlCode::encode(to_string(rosterId))+"/stats";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
