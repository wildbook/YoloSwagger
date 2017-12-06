#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectTimer_t {
    int32_t adjustedTimeLeftInPhaseInSec;
    int32_t timeLeftInPhaseInSec;
    int64_t timeLeftInPhase;
    bool isInfinite;
    int64_t totalTimeInPhase;
    int64_t adjustedTimeLeftInPhase;
    std::string phase;
    uint64_t internalNowInEpochMs;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectTimer_t& v) {
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec;
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec;
    j["timeLeftInPhase"] = v.timeLeftInPhase;
    j["isInfinite"] = v.isInfinite;
    j["totalTimeInPhase"] = v.totalTimeInPhase;
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase;
    j["phase"] = v.phase;
    j["internalNowInEpochMs"] = v.internalNowInEpochMs;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectTimer_t& v) {
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>();
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>();
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>();
    v.isInfinite = j.at("isInfinite").get<bool>();
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>();
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>();
    v.phase = j.at("phase").get<std::string>();
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>();
  }
}
