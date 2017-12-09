#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectTimer_t {
    int64_t totalTimeInPhase;
    bool isInfinite;
    std::string phase;
    int32_t adjustedTimeLeftInPhaseInSec;
    int32_t timeLeftInPhaseInSec;
    int64_t timeLeftInPhase;
    int64_t adjustedTimeLeftInPhase;
    uint64_t internalNowInEpochMs;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyChampSelectTimer_t& v) {
    j["totalTimeInPhase"] = v.totalTimeInPhase;
    j["isInfinite"] = v.isInfinite;
    j["phase"] = v.phase;
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec;
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec;
    j["timeLeftInPhase"] = v.timeLeftInPhase;
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase;
    j["internalNowInEpochMs"] = v.internalNowInEpochMs;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyChampSelectTimer_t& v) {
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>();
    v.isInfinite = j.at("isInfinite").get<bool>();
    v.phase = j.at("phase").get<std::string>();
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>();
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>();
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>();
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>();
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyChampSelectTimer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
