#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Minimize the ux process and all its windows if it exists. This does not kill the ux.
  void PostRiotclientUxMinimize (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/riotclient/ux-minimize";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}