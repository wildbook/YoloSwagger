#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Kills the ux process and restarts it. Used only when the ux process crashes.
  void PostRiotclientKillAndRestartUx (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/riotclient/kill-and-restart-ux";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}