#ifndef SWAGGER_TYPES_MatchmakingLcdsQueueDodger_HPP
#define SWAGGER_TYPES_MatchmakingLcdsQueueDodger_HPP
#include <json.hpp>
#include "MatchmakingLcdsSummoner.hpp"
namespace leagueapi {
  // 
  struct MatchmakingLcdsQueueDodger {
    // 
    uint64_t dodgePenaltyRemainingTime;
    // 
    std::string reasonFailed;
    // 
    MatchmakingLcdsSummoner summoner;
  };

  void to_json(nlohmann::json& j, const MatchmakingLcdsQueueDodger& v) {
    j["dodgePenaltyRemainingTime"] = v.dodgePenaltyRemainingTime;
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }

  void from_json(const nlohmann::json& j, MatchmakingLcdsQueueDodger& v) {
    v.dodgePenaltyRemainingTime = j.at("dodgePenaltyRemainingTime").get<uint64_t>;
    v.reasonFailed = j.at("reasonFailed").get<std::string>;
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsQueueDodger_HPP
