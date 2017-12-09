#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolGameflowV1SessionEvent (const ClientInfo& info,
    const std::string& session)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(session).dump();
    std::string path = "/lol-gameflow/v1/session/event";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
