#pragma once
#include "../client.hpp"
#include "LolLobbyLobby.hpp"
namespace leagueapi {
  LolLobbyLobby_t PostLolLobbyV1LastQueuedLobbyPlayAgain (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-lobby/v1/last-queued-lobby/play-again";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
