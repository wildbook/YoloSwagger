#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectChampSelectTimer_t {
    int64_t adjustedTimeLeftInPhase;
    int32_t adjustedTimeLeftInPhaseInSec;
    uint64_t internalNowInEpochMs;
    bool isInfinite;
    std::string phase;
    int64_t timeLeftInPhase;
    int32_t timeLeftInPhaseInSec;
    int64_t totalTimeInPhase;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectTimer_t& v) {
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase;
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec;
    j["internalNowInEpochMs"] = v.internalNowInEpochMs;
    j["isInfinite"] = v.isInfinite;
    j["phase"] = v.phase;
    j["timeLeftInPhase"] = v.timeLeftInPhase;
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec;
    j["totalTimeInPhase"] = v.totalTimeInPhase;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectTimer_t& v) {
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>();
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>();
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>();
    v.isInfinite = j.at("isInfinite").get<bool>();
    v.phase = j.at("phase").get<std::string>();
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>();
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>();
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>();
  }
}
