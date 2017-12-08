#pragma once
#incldue "../client.hpp"
#include "LolLoginAccessToken.hpp"
namespace leagueapi {
  nlohmann::json_t PostLolLoginV1AccessToken (const ClientInfo& info,
    const LolLoginAccessToken_t& AccessToken)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(AccessToken).dump();
    const std::string path = "/lol-login/v1/access-token";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
