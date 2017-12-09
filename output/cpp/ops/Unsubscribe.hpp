#pragma once
#include "../client.hpp"
namespace leagueapi {
  //Unsubscribes from a given event
  nlohmann::json Unsubscribe (const ClientInfo& info,
    //Name of the event to unsubscribe from
    const std::string& eventName)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/Unsubscribe";
    Headers query;
      query["eventName"] = eventName;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
