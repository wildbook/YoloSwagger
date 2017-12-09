#pragma once
#include "../client.hpp"
namespace leagueapi {
  //Retrieves the result of a completed asynchronous operation.
  nlohmann::json AsyncResult (const ClientInfo& info,
    //ID of the asynchronous operation to check
    const uint32_t& asyncToken)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/AsyncResult";
    Headers query;
      query["asyncToken"] = asyncToken;
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
