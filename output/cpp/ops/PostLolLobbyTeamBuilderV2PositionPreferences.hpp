#pragma once
#incldue "../client.hpp"
#include "LolLobbyTeamBuilderLobbyPositionPreferencesV2.hpp"
namespace leagueapi {
  nlohmann::json_t PostLolLobbyTeamBuilderV2PositionPreferences (const ClientInfo& info,
    const LolLobbyTeamBuilderLobbyPositionPreferencesV2_t& positionPreferences)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(positionPreferences).dump();
    const std::string path = "/lol-lobby-team-builder/v2/position-preferences";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
