#pragma once
#include "../client.hpp"
#include "LolLobbyLobby.hpp"
#include "LolLobbyLobbyChangeQueue.hpp"
namespace leagueapi {
  LolLobbyLobby_t PostLolLobbyV1ChangeQueue (const ClientInfo& info,
    const LolLobbyLobbyChangeQueue_t& queueId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(queueId).dump();
    std::string path = "/lol-lobby/v1/change-queue";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
