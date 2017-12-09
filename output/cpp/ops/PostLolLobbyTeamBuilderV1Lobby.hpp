#pragma once
#include "../client.hpp"
#include "LolLobbyTeamBuilderLobby.hpp"
namespace leagueapi {
  LolLobbyTeamBuilderLobby_t PostLolLobbyTeamBuilderV1Lobby (const ClientInfo& info,
    const LolLobbyTeamBuilderLobby_t& lobby)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(lobby).dump();
    std::string path = "/lol-lobby-team-builder/v1/lobby";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
