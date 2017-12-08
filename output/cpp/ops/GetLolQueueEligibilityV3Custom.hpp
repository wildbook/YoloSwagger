#pragma once
#incldue "../client.hpp"
#include "LolQueueEligibilityEligibility.hpp"
namespace leagueapi {
  std::vector<LolQueueEligibilityEligibility_t> GetLolQueueEligibilityV3Custom (const ClientInfo& info,
    const int32_t_t& teamSize,
    const std::string_t& pickMode)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-queue-eligibility/v3/custom?teamSize=" + UrlCode::encode(to_string(teamSize))    +
    "&pickMode=" + UrlCode::encode(to_string(pickMode));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
