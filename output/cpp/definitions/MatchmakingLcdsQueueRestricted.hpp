#ifndef SWAGGER_TYPES_MatchmakingLcdsQueueRestricted_HPP
#define SWAGGER_TYPES_MatchmakingLcdsQueueRestricted_HPP
#include <json.hpp>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  // 
  struct MatchmakingLcdsQueueRestricted {
    // 
    MatchmakingLcdsSummoner summoner;
    // 
    int32_t queueId;
    // 
    std::string message;
    // 
    std::string reasonFailed;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsQueueRestricted& v) {
    j["summoner"] = v.summoner;
    j["queueId"] = v.queueId;
    j["message"] = v.message;
    j["reasonFailed"] = v.reasonFailed;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsQueueRestricted& v) {
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.message = j.at("message").get<std::string>;
    v.reasonFailed = j.at("reasonFailed").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsQueueRestricted_HPP
