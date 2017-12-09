#pragma once
#include "../client.hpp"
#include "RsoAuthRegionStatus.hpp"
namespace leagueapi {
  RsoAuthRegionStatus_t GetRsoAuthV1StatusByPlatformId (const ClientInfo& info,
    const std::string& platformId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/rso-auth/v1/status/"+UrlCode::encode(to_string(platformId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
