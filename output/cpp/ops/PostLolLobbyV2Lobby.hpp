#pragma once
#incldue "../client.hpp"
#include "LolLobbyLobbyChangeGameDto.hpp"
#include "LolLobbyLobbyDto.hpp"
namespace leagueapi {
  LolLobbyLobbyDto_t PostLolLobbyV2Lobby (const ClientInfo& info,
    const LolLobbyLobbyChangeGameDto_t& lobbyChange)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(lobbyChange).dump();
    const std::string path = "/lol-lobby/v2/lobby";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}