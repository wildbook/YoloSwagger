#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  struct LolClashTournamentStateInfo_t {
    int32_t_t numRemainingPeriods;
    int64_t_t nextPhaseId;
    int64_t_t currentPhaseId;
    int64_t_t nextStateChangeTime;
    LolClashTournamentState_t state;
    int64_t_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentStateInfo_t& v) {
    j["numRemainingPeriods"] = v.numRemainingPeriods;
    j["nextPhaseId"] = v.nextPhaseId;
    j["currentPhaseId"] = v.currentPhaseId;
    j["nextStateChangeTime"] = v.nextStateChangeTime;
    j["state"] = v.state;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentStateInfo_t& v) {
    v.numRemainingPeriods = j.at("numRemainingPeriods").get<int32_t_t>();
    v.nextPhaseId = j.at("nextPhaseId").get<int64_t_t>();
    v.currentPhaseId = j.at("currentPhaseId").get<int64_t_t>();
    v.nextStateChangeTime = j.at("nextStateChangeTime").get<int64_t_t>();
    v.state = j.at("state").get<LolClashTournamentState_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t_t>();
  }
  inline std::string to_string(const LolClashTournamentStateInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
