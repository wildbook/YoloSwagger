#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectChampSelectTimer_t {
    bool_t isInfinite;
    int64_t_t totalTimeInPhase;
    int32_t_t timeLeftInPhaseInSec;
    int64_t_t adjustedTimeLeftInPhase;
    uint64_t_t internalNowInEpochMs;
    std::string_t phase;
    int32_t_t adjustedTimeLeftInPhaseInSec;
    int64_t_t timeLeftInPhase;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectTimer_t& v) {
    j["isInfinite"] = v.isInfinite;
    j["totalTimeInPhase"] = v.totalTimeInPhase;
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec;
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase;
    j["internalNowInEpochMs"] = v.internalNowInEpochMs;
    j["phase"] = v.phase;
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec;
    j["timeLeftInPhase"] = v.timeLeftInPhase;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectTimer_t& v) {
    v.isInfinite = j.at("isInfinite").get<bool_t>();
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t_t>();
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t_t>();
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t_t>();
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t_t>();
    v.phase = j.at("phase").get<std::string_t>();
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t_t>();
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t_t>();
  }
  inline std::string to_string(const LolChampSelectChampSelectTimer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
