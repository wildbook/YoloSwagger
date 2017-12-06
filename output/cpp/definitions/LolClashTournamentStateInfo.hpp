#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  struct LolClashTournamentStateInfo_t {
    int64_t currentPhaseId;
    int64_t nextPhaseId;
    int64_t nextStateChangeTime;
    int32_t numRemainingPeriods;
    LolClashTournamentState_t state;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentStateInfo_t& v) {
    j["currentPhaseId"] = v.currentPhaseId;
    j["nextPhaseId"] = v.nextPhaseId;
    j["nextStateChangeTime"] = v.nextStateChangeTime;
    j["numRemainingPeriods"] = v.numRemainingPeriods;
    j["state"] = v.state;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentStateInfo_t& v) {
    v.currentPhaseId = j.at("currentPhaseId").get<int64_t>();
    v.nextPhaseId = j.at("nextPhaseId").get<int64_t>();
    v.nextStateChangeTime = j.at("nextStateChangeTime").get<int64_t>();
    v.numRemainingPeriods = j.at("numRemainingPeriods").get<int32_t>();
    v.state = j.at("state").get<LolClashTournamentState_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
}
