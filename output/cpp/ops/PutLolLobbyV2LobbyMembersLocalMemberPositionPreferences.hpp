#pragma once
#incldue "../client.hpp"
#include "LolLobbyLobbyPositionPreferences.hpp"
namespace leagueapi {
  nlohmann::json_t PutLolLobbyV2LobbyMembersLocalMemberPositionPreferences (const ClientInfo& info,
    const LolLobbyLobbyPositionPreferences_t& positionPreferences)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(positionPreferences).dump();
    const std::string path = "/lol-lobby/v2/lobby/members/localMember/position-preferences";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}