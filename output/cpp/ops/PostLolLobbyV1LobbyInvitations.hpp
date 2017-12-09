#pragma once
#include "../client.hpp"
#include "LolLobbyLobbyInvitation.hpp"
namespace leagueapi {
  LolLobbyLobbyInvitation_t PostLolLobbyV1LobbyInvitations (const ClientInfo& info,
    const LolLobbyLobbyInvitation_t& invitation)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(invitation).dump();
    std::string path = "/lol-lobby/v1/lobby/invitations";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
