#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Ux notification that it has completed loading the main window.
  void PutRiotclientUxLoadComplete (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/riotclient/ux-load-complete";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
