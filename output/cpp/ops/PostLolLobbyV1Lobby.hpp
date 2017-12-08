#pragma once
#incldue "../client.hpp"
#include "LolLobbyLobby.hpp"
namespace leagueapi {
  LolLobbyLobby_t PostLolLobbyV1Lobby (const ClientInfo& info,
    const LolLobbyLobby_t& lobby)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(lobby).dump();
    const std::string path = "/lol-lobby/v1/lobby";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
