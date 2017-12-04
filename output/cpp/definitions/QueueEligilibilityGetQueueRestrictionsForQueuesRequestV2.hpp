#ifndef SWAGGER_TYPES_QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_HPP
#define SWAGGER_TYPES_QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2 {
    // 
    std::vector<int32_t> queueIds;
    // 
    std::vector<std::string> queueRestrictionsToExclude;
    // 
    std::vector<uint64_t> summonerIds;
  };

  inline void to_json(nlohmann::json& j, const QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2& v) {
    j["queueIds"] = v.queueIds;
    j["queueRestrictionsToExclude"] = v.queueRestrictionsToExclude;
    j["summonerIds"] = v.summonerIds;
  }

  inline void from_json(const nlohmann::json& j, QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2& v) {
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>;
    v.queueRestrictionsToExclude = j.at("queueRestrictionsToExclude").get<std::vector<std::string>>;
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2_HPP
