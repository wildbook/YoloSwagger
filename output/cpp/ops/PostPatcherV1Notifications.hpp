#pragma once
#include "../client.hpp"
#include ".hpp"
#include "PatcherNotificationId.hpp"
namespace leagueapi {
  void PostPatcherV1Notifications (const ClientInfo& info,
    const PatcherNotificationId_t& notificationId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/patcher/v1/notifications";
    Headers query;
      query["notificationId"] = notificationId;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
