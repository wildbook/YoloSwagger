#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectTimer_t {
    uint64_t internalNowInEpochMs;
    int32_t adjustedTimeLeftInPhaseInSec;
    int32_t timeLeftInPhaseInSec;
    int64_t adjustedTimeLeftInPhase;
    int64_t timeLeftInPhase;
    std::string phase;
    int64_t totalTimeInPhase;
    bool isInfinite;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectTimer_t& v) {
    j["internalNowInEpochMs"] = v.internalNowInEpochMs;
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec;
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec;
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase;
    j["timeLeftInPhase"] = v.timeLeftInPhase;
    j["phase"] = v.phase;
    j["totalTimeInPhase"] = v.totalTimeInPhase;
    j["isInfinite"] = v.isInfinite;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectTimer_t& v) {
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>();
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>();
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>();
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>();
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>();
    v.phase = j.at("phase").get<std::string>();
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>();
    v.isInfinite = j.at("isInfinite").get<bool>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectTimer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
