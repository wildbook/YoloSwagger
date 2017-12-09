#pragma once
#include "../client.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchResource.hpp"
namespace leagueapi {
  LolLobbyTeamBuilderMatchmakingSearchResource_t PostLolLobbyTeamBuilderV1MatchmakingSearch (const ClientInfo& info,
    const std::string& leaverBusterToken)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(leaverBusterToken).dump();
    std::string path = "/lol-lobby-team-builder/v1/matchmaking/search";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
