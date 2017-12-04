#ifndef SWAGGER_TYPES_TournamentPhaseDTO_HPP
#define SWAGGER_TYPES_TournamentPhaseDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct TournamentPhaseDTO {
    // 
    int64_t registrationTime;
    // 
    int64_t tournamentId;
    // 
    int64_t id;
    // 
    int64_t startTime;
    // 
    int32_t period;
  };

  inline void to_json(nlohmann::json& j, const TournamentPhaseDTO& v) {
    j["registrationTime"] = v.registrationTime;
    j["tournamentId"] = v.tournamentId;
    j["id"] = v.id;
    j["startTime"] = v.startTime;
    j["period"] = v.period;
  }

  inline void from_json(const nlohmann::json& j, TournamentPhaseDTO& v) {
    v.registrationTime = j.at("registrationTime").get<int64_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.id = j.at("id").get<int64_t>;
    v.startTime = j.at("startTime").get<int64_t>;
    v.period = j.at("period").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_TournamentPhaseDTO_HPP
