#pragma once
#incldue "../client.hpp"
#include ".hpp"
#include "PatcherNotificationId.hpp"
namespace leagueapi {
  void PostPatcherV1Notifications (const ClientInfo& info,
    const PatcherNotificationId_t& notificationId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/patcher/v1/notifications?notificationId=" + UrlCode::encode(to_string(notificationId));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
