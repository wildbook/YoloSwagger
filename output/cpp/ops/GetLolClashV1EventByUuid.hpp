#pragma once
#incldue "../client.hpp"
#include "ClashEventData.hpp"
namespace leagueapi {
  ClashEventData_t GetLolClashV1EventByUuid (const ClientInfo& info,
    const std::string_t& uuid)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-clash/v1/event/"+UrlCode::encode(to_string(uuid))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}