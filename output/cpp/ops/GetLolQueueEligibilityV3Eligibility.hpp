#pragma once
#incldue "../client.hpp"
#include "LolQueueEligibilityEligibility.hpp"
namespace leagueapi {
  std::vector<LolQueueEligibilityEligibility_t> GetLolQueueEligibilityV3Eligibility (const ClientInfo& info,
    const std::vector<uint64_t>& summonerIds,
    const std::vector<int32_t>& queueIds)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-queue-eligibility/v3/eligibility?summonerIds=" + UrlCode::encode(to_string(summonerIds))    +
    "&queueIds=" + UrlCode::encode(to_string(queueIds));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
