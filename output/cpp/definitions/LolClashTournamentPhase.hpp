#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTournamentPhase_t {
    int64_t scoutingStartTime;
    int64_t id;
    int32_t period;
    int64_t tournamentId;
    int64_t lockinStartTime;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentPhase_t& v) {
    j["scoutingStartTime"] = v.scoutingStartTime;
    j["id"] = v.id;
    j["period"] = v.period;
    j["tournamentId"] = v.tournamentId;
    j["lockinStartTime"] = v.lockinStartTime;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentPhase_t& v) {
    v.scoutingStartTime = j.at("scoutingStartTime").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.period = j.at("period").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.lockinStartTime = j.at("lockinStartTime").get<int64_t>();
  }
  inline std::string to_string(const LolClashTournamentPhase_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
