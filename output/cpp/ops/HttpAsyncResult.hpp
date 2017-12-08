#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  //Retrieves the result of a completed asynchronous operation.
  nlohmann::json_t HttpAsyncResult (const ClientInfo& info,
    //ID of the asynchronous operation to check
    const uint32_t_t& asyncToken)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/async/v1/result/"+UrlCode::encode(to_string(asyncToken))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}