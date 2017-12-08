#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_t {
    std::vector<uint64_t> summonerIds;
    std::vector<int32_t> queueIds;
    std::vector<std::string> queueRestrictionsToExclude;
  };

  inline void to_json(nlohmann::json& j, const QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_t& v) {
    j["summonerIds"] = v.summonerIds;
    j["queueIds"] = v.queueIds;
    j["queueRestrictionsToExclude"] = v.queueRestrictionsToExclude;
  }

  inline void from_json(const nlohmann::json& j, QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_t& v) {
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>();
    v.queueRestrictionsToExclude = j.at("queueRestrictionsToExclude").get<std::vector<std::string>>();
  }
  inline std::string to_string(const QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
