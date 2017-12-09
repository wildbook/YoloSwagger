#pragma once
#include "../client.hpp"
#include "PlayerNotificationResource.hpp"
namespace leagueapi {
  PlayerNotificationResource_t PutPlayerNotificationsV1NotificationsById (const ClientInfo& info,
    const uint64_t& id,
    const nlohmann::json& notification)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(notification).dump();
    std::string path = "/player-notifications/v1/notifications/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
