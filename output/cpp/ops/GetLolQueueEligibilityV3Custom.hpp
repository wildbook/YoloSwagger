#pragma once
#include "../client.hpp"
#include "LolQueueEligibilityEligibility.hpp"
namespace leagueapi {
  std::vector<LolQueueEligibilityEligibility_t> GetLolQueueEligibilityV3Custom (const ClientInfo& info,
    const int32_t& teamSize,
    const std::string& pickMode)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-queue-eligibility/v3/custom";
    Headers query;
      query["teamSize"] = teamSize;
      query["pickMode"] = pickMode;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
