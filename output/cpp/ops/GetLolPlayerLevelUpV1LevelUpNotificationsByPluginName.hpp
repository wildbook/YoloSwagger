#pragma once
#include "../client.hpp"
#include "PlayerLevelUpEventAck.hpp"
namespace leagueapi {
  PlayerLevelUpEventAck_t GetLolPlayerLevelUpV1LevelUpNotificationsByPluginName (const ClientInfo& info,
    const std::string& pluginName)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-player-level-up/v1/level-up-notifications/"+UrlCode::encode(to_string(pluginName))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
