#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void DeleteLolLobbyTeamBuilderV1Lobby (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-lobby-team-builder/v1/lobby";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
