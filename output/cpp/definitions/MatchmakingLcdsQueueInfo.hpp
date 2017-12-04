#ifndef SWAGGER_TYPES_MatchmakingLcdsQueueInfo_HPP
#define SWAGGER_TYPES_MatchmakingLcdsQueueInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MatchmakingLcdsQueueInfo {
    // 
    uint64_t waitTime;
    // 
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueInfo& v) {
    j["waitTime"] = v.waitTime;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueInfo& v) {
    v.waitTime = j.at("waitTime").get<uint64_t>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsQueueInfo_HPP
