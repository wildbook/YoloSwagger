#pragma once
#incldue "../client.hpp"
#include "RsoAuthRegionStatus.hpp"
namespace leagueapi {
  RsoAuthRegionStatus_t GetRsoAuthV1StatusByPlatformId (const ClientInfo& info,
    const std::string_t& platformId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/rso-auth/v1/status/"+UrlCode::encode(to_string(platformId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}