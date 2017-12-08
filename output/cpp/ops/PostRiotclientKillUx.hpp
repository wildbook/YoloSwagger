#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Kills the ux process.
  void PostRiotclientKillUx (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/riotclient/kill-ux";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
