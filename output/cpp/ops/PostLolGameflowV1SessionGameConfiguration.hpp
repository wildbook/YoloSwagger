#pragma once
#incldue "../client.hpp"
#include ".hpp"
#include "LolGameflowQueue.hpp"
namespace leagueapi {
  void PostLolGameflowV1SessionGameConfiguration (const ClientInfo& info,
    const LolGameflowQueue_t& queue)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(queue).dump();
    const std::string path = "/lol-gameflow/v1/session/game-configuration";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}