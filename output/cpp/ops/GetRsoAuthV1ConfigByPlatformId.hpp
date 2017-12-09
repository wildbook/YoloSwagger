#pragma once
#include "../client.hpp"
#include "RsoAuthRSOJWTConfig.hpp"
namespace leagueapi {
  RsoAuthRSOJWTConfig_t GetRsoAuthV1ConfigByPlatformId (const ClientInfo& info,
    const std::string& platformId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/rso-auth/v1/config/"+UrlCode::encode(to_string(platformId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
