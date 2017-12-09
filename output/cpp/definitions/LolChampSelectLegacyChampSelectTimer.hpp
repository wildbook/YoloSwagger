#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectTimer_t {
    int64_t timeLeftInPhase;
    int64_t adjustedTimeLeftInPhase;
    bool isInfinite;
    int32_t timeLeftInPhaseInSec;
    int64_t totalTimeInPhase;
    int32_t adjustedTimeLeftInPhaseInSec;
    std::string phase;
    uint64_t internalNowInEpochMs;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectTimer_t& v) {
    j["timeLeftInPhase"] = v.timeLeftInPhase;
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase;
    j["isInfinite"] = v.isInfinite;
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec;
    j["totalTimeInPhase"] = v.totalTimeInPhase;
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec;
    j["phase"] = v.phase;
    j["internalNowInEpochMs"] = v.internalNowInEpochMs;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectTimer_t& v) {
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>();
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>();
    v.isInfinite = j.at("isInfinite").get<bool>();
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>();
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>();
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>();
    v.phase = j.at("phase").get<std::string>();
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectTimer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
