#pragma once
#incldue "../client.hpp"
#include "cookie.hpp"
namespace leagueapi {
  //Set a cookie.
  nlohmann::json_t PostCookieJarV1Cookies (const ClientInfo& info,
    //Cookie to set
    const std::vector<cookie_t>& cookie)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(cookie).dump();
    const std::string path = "/cookie-jar/v1/cookies";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}