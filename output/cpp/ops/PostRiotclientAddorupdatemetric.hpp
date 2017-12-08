#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Adds or Updates a Metric
  void PostRiotclientAddorupdatemetric (const ClientInfo& info,
    //Name of metric group
    const std::string_t& group,
    //Name of metric object
    const std::string_t& object,
    //Name of metric item
    const std::string_t& name,
    //Value to store
    const uint64_t_t& value)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/riotclient/addorupdatemetric?group=" + UrlCode::encode(to_string(group))    +
    "&object=" + UrlCode::encode(to_string(object))    +
    "&name=" + UrlCode::encode(to_string(name))    +
    "&value=" + UrlCode::encode(to_string(value));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}