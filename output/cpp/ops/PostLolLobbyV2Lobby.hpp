#pragma once
#include "../client.hpp"
#include "LolLobbyLobbyDto.hpp"
#include "LolLobbyLobbyChangeGameDto.hpp"
namespace leagueapi {
  LolLobbyLobbyDto_t PostLolLobbyV2Lobby (const ClientInfo& info,
    const LolLobbyLobbyChangeGameDto_t& lobbyChange)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(lobbyChange).dump();
    std::string path = "/lol-lobby/v2/lobby";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
