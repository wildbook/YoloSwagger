#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  struct LolClashTournamentStateInfo_t {
    int64_t nextStateChangeTime;
    int64_t nextPhaseId;
    int32_t numRemainingPeriods;
    int64_t tournamentId;
    int64_t currentPhaseId;
    LolClashTournamentState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentStateInfo_t& v) {
    j["nextStateChangeTime"] = v.nextStateChangeTime;
    j["nextPhaseId"] = v.nextPhaseId;
    j["numRemainingPeriods"] = v.numRemainingPeriods;
    j["tournamentId"] = v.tournamentId;
    j["currentPhaseId"] = v.currentPhaseId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentStateInfo_t& v) {
    v.nextStateChangeTime = j.at("nextStateChangeTime").get<int64_t>();
    v.nextPhaseId = j.at("nextPhaseId").get<int64_t>();
    v.numRemainingPeriods = j.at("numRemainingPeriods").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.currentPhaseId = j.at("currentPhaseId").get<int64_t>();
    v.state = j.at("state").get<LolClashTournamentState_t>();
  }
  inline std::string to_string(const LolClashTournamentStateInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
