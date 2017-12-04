#ifndef SWAGGER_TYPES_LolChampSelectChampSelectTimer_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectTimer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectTimer {
    // 
    bool isInfinite;
    // 
    int64_t totalTimeInPhase;
    // 
    int32_t timeLeftInPhaseInSec;
    // 
    int64_t adjustedTimeLeftInPhase;
    // 
    uint64_t internalNowInEpochMs;
    // 
    std::string phase;
    // 
    int32_t adjustedTimeLeftInPhaseInSec;
    // 
    int64_t timeLeftInPhase;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectTimer& v) {
    j["isInfinite"] = v.isInfinite;
    j["totalTimeInPhase"] = v.totalTimeInPhase;
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec;
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase;
    j["internalNowInEpochMs"] = v.internalNowInEpochMs;
    j["phase"] = v.phase;
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec;
    j["timeLeftInPhase"] = v.timeLeftInPhase;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectTimer& v) {
    v.isInfinite = j.at("isInfinite").get<bool>;
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>;
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>;
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>;
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>;
    v.phase = j.at("phase").get<std::string>;
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>;
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectTimer_HPP
