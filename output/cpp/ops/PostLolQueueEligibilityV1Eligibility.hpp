#pragma once
#incldue "../client.hpp"
#include "LolQueueEligibilityEligibility.hpp"
#include "LolQueueEligibilityEligibilityQueryParams.hpp"
namespace leagueapi {
  std::vector<LolQueueEligibilityEligibility_t> PostLolQueueEligibilityV1Eligibility (const ClientInfo& info,
    const LolQueueEligibilityEligibilityQueryParams_t& eligibilityQueryParam)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(eligibilityQueryParam).dump();
    const std::string path = "/lol-queue-eligibility/v1/eligibility";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
