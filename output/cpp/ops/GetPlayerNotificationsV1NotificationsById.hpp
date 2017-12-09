#pragma once
#include "../client.hpp"
#include "PlayerNotificationResource.hpp"
namespace leagueapi {
  PlayerNotificationResource_t GetPlayerNotificationsV1NotificationsById (const ClientInfo& info,
    const uint64_t& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/player-notifications/v1/notifications/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
