#pragma once
#include "../client.hpp"
#include ".hpp"
#include "PlayerLevelUpEventAck.hpp"
namespace leagueapi {
  void PostLolPlayerLevelUpV1LevelUpNotificationsByPluginName (const ClientInfo& info,
    const std::string& pluginName,
    const PlayerLevelUpEventAck_t& levelUpEventAck)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(levelUpEventAck).dump();
    std::string path = "/lol-player-level-up/v1/level-up-notifications/"+UrlCode::encode(to_string(pluginName))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
