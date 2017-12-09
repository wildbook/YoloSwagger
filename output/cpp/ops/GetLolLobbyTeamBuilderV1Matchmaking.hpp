#pragma once
#include "../client.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchResource.hpp"
namespace leagueapi {
  LolLobbyTeamBuilderMatchmakingSearchResource_t GetLolLobbyTeamBuilderV1Matchmaking (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-lobby-team-builder/v1/matchmaking";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
