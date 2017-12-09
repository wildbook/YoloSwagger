#pragma once
#include "../client.hpp"
#include "LolStoreOrderNotificationResource.hpp"
namespace leagueapi {
  LolStoreOrderNotificationResource_t GetLolStoreV1OrderNotificationsById (const ClientInfo& info,
    const uint64_t& id)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-store/v1/order-notifications/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
