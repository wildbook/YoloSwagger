#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Endpoint for passing in new data.
  void PostRiotclientNewArgs (const ClientInfo& info,
    //Vector of new command line arguments
    const std::vector<std::string>& args)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/x-www-form-urlencoded";
    const std::string body = body = UrlCode::encode(to_string(args));
    std::string path = "/riotclient/new-args";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
