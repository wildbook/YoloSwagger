#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolGameflowV1ExtraGameClientArgs (const ClientInfo& info,
    const std::vector<std::string>& extraGameClientArgs)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(extraGameClientArgs).dump();
    std::string path = "/lol-gameflow/v1/extra-game-client-args";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
