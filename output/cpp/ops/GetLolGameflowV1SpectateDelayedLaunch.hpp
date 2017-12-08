#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void GetLolGameflowV1SpectateDelayedLaunch (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-gameflow/v1/spectate/delayed-launch";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}