#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Adds or Updates a Metric
  void PostRiotclientAddorupdatemetric (const ClientInfo& info,
    //Name of metric group
    const std::string& group,
    //Name of metric object
    const std::string& object,
    //Name of metric item
    const std::string& name,
    //Value to store
    const uint64_t& value)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/riotclient/addorupdatemetric";
    Headers query;
      query["group"] = group;
      query["object"] = object;
      query["name"] = name;
      query["value"] = value;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
