#pragma once
#include "../client.hpp"
#include "LolLobbyLobbyInvitationDto.hpp"
namespace leagueapi {
  std::vector<LolLobbyLobbyInvitationDto_t> PostLolLobbyV2LobbyInvitations (const ClientInfo& info,
    const std::vector<LolLobbyLobbyInvitationDto_t>& invitations)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(invitations).dump();
    std::string path = "/lol-lobby/v2/lobby/invitations";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
