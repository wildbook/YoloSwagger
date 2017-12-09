#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_t {
    std::vector<std::string> queueRestrictionsToExclude;
    std::vector<int32_t> queueIds;
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_t& v) {
    j["queueRestrictionsToExclude"] = v.queueRestrictionsToExclude;
    j["queueIds"] = v.queueIds;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_t& v) {
    v.queueRestrictionsToExclude = j.at("queueRestrictionsToExclude").get<std::vector<std::string>>();
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>();
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
