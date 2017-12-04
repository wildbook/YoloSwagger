#ifndef SWAGGER_TYPES_LolClashTournamentPhase_HPP
#define SWAGGER_TYPES_LolClashTournamentPhase_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashTournamentPhase {
    // 
    int64_t scoutingStartTime;
    // 
    int64_t lockinStartTime;
    // 
    int64_t id;
    // 
    int64_t tournamentId;
    // 
    int32_t period;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentPhase& v) {
    j["scoutingStartTime"] = v.scoutingStartTime;
    j["lockinStartTime"] = v.lockinStartTime;
    j["id"] = v.id;
    j["tournamentId"] = v.tournamentId;
    j["period"] = v.period;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentPhase& v) {
    v.scoutingStartTime = j.at("scoutingStartTime").get<int64_t>;
    v.lockinStartTime = j.at("lockinStartTime").get<int64_t>;
    v.id = j.at("id").get<int64_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.period = j.at("period").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentPhase_HPP
