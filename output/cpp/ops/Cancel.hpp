#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  //Attempts to cancel an asynchronous operation
  nlohmann::json_t Cancel (const ClientInfo& info,
    //Operation to cancel
    const uint32_t_t& asyncToken)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/Cancel?asyncToken=" + UrlCode::encode(to_string(asyncToken));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
