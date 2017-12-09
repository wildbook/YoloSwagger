#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json PostLolLobbyTeamBuilderV1MatchmakingLowPriorityQueueAbandon (const ClientInfo& info,
    const std::string& leaverBusterToken)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(leaverBusterToken).dump();
    std::string path = "/lol-lobby-team-builder/v1/matchmaking/low-priority-queue/abandon";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
