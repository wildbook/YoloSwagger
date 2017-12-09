#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PutLolLobbyV1PartiesReady (const ClientInfo& info,
    const int32_t& ready)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(ready).dump();
    std::string path = "/lol-lobby/v1/parties/ready";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
