#pragma once
#include "../client.hpp"
#include "LolQueueEligibilityEligibility.hpp"
#include "LolQueueEligibilityEligibilityQueryParams.hpp"
namespace leagueapi {
  std::vector<LolQueueEligibilityEligibility_t> PostLolQueueEligibilityV2Eligibility (const ClientInfo& info,
    const LolQueueEligibilityEligibilityQueryParams_t& eligibilityQueryParam)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(eligibilityQueryParam).dump();
    std::string path = "/lol-queue-eligibility/v2/eligibility";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
