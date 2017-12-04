#ifndef SWAGGER_TYPES_MatchmakingLcdsQueueInfo_HPP
#define SWAGGER_TYPES_MatchmakingLcdsQueueInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MatchmakingLcdsQueueInfo {
    // 
    int32_t queueId;
    // 
    uint64_t waitTime;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueInfo& v) {
    j["queueId"] = v.queueId;
    j["waitTime"] = v.waitTime;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueInfo& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.waitTime = j.at("waitTime").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsQueueInfo_HPP
