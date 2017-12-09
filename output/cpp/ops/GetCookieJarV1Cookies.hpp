#pragma once
#include "../client.hpp"
#include "cookie.hpp"
namespace leagueapi {
  //Get all cookies.
  std::vector<cookie_t> GetCookieJarV1Cookies (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/cookie-jar/v1/cookies";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
