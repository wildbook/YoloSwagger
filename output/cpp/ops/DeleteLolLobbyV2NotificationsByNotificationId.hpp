#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t DeleteLolLobbyV2NotificationsByNotificationId (const ClientInfo& info,
    const std::string_t& notificationId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-lobby/v2/notifications/"+UrlCode::encode(to_string(notificationId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}