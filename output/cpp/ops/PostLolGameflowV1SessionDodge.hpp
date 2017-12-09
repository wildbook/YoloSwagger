#pragma once
#include "../client.hpp"
#include ".hpp"
#include "LolGameflowGameflowGameDodge.hpp"
namespace leagueapi {
  void PostLolGameflowV1SessionDodge (const ClientInfo& info,
    const LolGameflowGameflowGameDodge_t& dodgeData)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(dodgeData).dump();
    std::string path = "/lol-gameflow/v1/session/dodge";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
