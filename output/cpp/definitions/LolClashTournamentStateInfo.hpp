#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  struct LolClashTournamentStateInfo_t {
    int64_t nextStateChangeTime;
    int64_t tournamentId;
    LolClashTournamentState_t state;
    int32_t numRemainingPeriods;
    int64_t nextPhaseId;
    int64_t currentPhaseId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentStateInfo_t& v) {
    j["nextStateChangeTime"] = v.nextStateChangeTime;
    j["tournamentId"] = v.tournamentId;
    j["state"] = v.state;
    j["numRemainingPeriods"] = v.numRemainingPeriods;
    j["nextPhaseId"] = v.nextPhaseId;
    j["currentPhaseId"] = v.currentPhaseId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentStateInfo_t& v) {
    v.nextStateChangeTime = j.at("nextStateChangeTime").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.state = j.at("state").get<LolClashTournamentState_t>();
    v.numRemainingPeriods = j.at("numRemainingPeriods").get<int32_t>();
    v.nextPhaseId = j.at("nextPhaseId").get<int64_t>();
    v.currentPhaseId = j.at("currentPhaseId").get<int64_t>();
  }
}
