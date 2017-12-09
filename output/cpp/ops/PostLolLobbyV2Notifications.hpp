#pragma once
#include "../client.hpp"
#include ".hpp"
#include "LolLobbyLobbyNotification.hpp"
namespace leagueapi {
  void PostLolLobbyV2Notifications (const ClientInfo& info,
    const LolLobbyLobbyNotification_t& notification)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(notification).dump();
    std::string path = "/lol-lobby/v2/notifications";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
