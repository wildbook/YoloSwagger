#pragma once
#include "../client.hpp"
#include "LolLobbyTeamBuilderLobby.hpp"
namespace leagueapi {
  LolLobbyTeamBuilderLobby_t PostLolLobbyTeamBuilderV1Lobby (const ClientInfo& info,
    const LolLobbyTeamBuilderLobby_t& lobby)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(lobby).dump();
    std::string path = "/lol-lobby-team-builder/v1/lobby";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
