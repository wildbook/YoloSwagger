#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Sets the current runtime affinity of the application.
  void PostRiotclientAffinity (const ClientInfo& info,
    //The new affinity to use.
    const std::string& newAffinity)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/riotclient/affinity";
    Headers query;
      query["newAffinity"] = newAffinity;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
