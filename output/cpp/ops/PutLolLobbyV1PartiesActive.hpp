#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PutLolLobbyV1PartiesActive (const ClientInfo& info,
    const int32_t& active)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(active).dump();
    std::string path = "/lol-lobby/v1/parties/active";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
