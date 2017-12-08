#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectTimer_t {
    bool isInfinite;
    int64_t totalTimeInPhase;
    uint64_t internalNowInEpochMs;
    int64_t adjustedTimeLeftInPhase;
    std::string phase;
    int64_t timeLeftInPhase;
    int32_t adjustedTimeLeftInPhaseInSec;
    int32_t timeLeftInPhaseInSec;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectTimer_t& v) {
    j["isInfinite"] = v.isInfinite;
    j["totalTimeInPhase"] = v.totalTimeInPhase;
    j["internalNowInEpochMs"] = v.internalNowInEpochMs;
    j["adjustedTimeLeftInPhase"] = v.adjustedTimeLeftInPhase;
    j["phase"] = v.phase;
    j["timeLeftInPhase"] = v.timeLeftInPhase;
    j["adjustedTimeLeftInPhaseInSec"] = v.adjustedTimeLeftInPhaseInSec;
    j["timeLeftInPhaseInSec"] = v.timeLeftInPhaseInSec;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectTimer_t& v) {
    v.isInfinite = j.at("isInfinite").get<bool>();
    v.totalTimeInPhase = j.at("totalTimeInPhase").get<int64_t>();
    v.internalNowInEpochMs = j.at("internalNowInEpochMs").get<uint64_t>();
    v.adjustedTimeLeftInPhase = j.at("adjustedTimeLeftInPhase").get<int64_t>();
    v.phase = j.at("phase").get<std::string>();
    v.timeLeftInPhase = j.at("timeLeftInPhase").get<int64_t>();
    v.adjustedTimeLeftInPhaseInSec = j.at("adjustedTimeLeftInPhaseInSec").get<int32_t>();
    v.timeLeftInPhaseInSec = j.at("timeLeftInPhaseInSec").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectTimer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
