#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Shows the ux process if it exists; create and show if it does not.
  void PostRiotclientUxShow (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/riotclient/ux-show";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
