#ifndef SWAGGER_TYPES_TournamentPhaseDTO_HPP
#define SWAGGER_TYPES_TournamentPhaseDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct TournamentPhaseDTO {
'    // 
    int64_t id;
    // 
    int32_t period;
    // 
    int64_t registrationTime;
    // 
    int64_t startTime;
    // 
    int64_t tournamentId;
  };

  void to_json(nlohmann::json& j, const TournamentPhaseDTO& v) {
    j["id"] = v.id;
    j["period"] = v.period;
    j["registrationTime"] = v.registrationTime;
    j["startTime"] = v.startTime;
    j["tournamentId"] = v.tournamentId;
  }

  void from_json(const nlohmann::json& j, TournamentPhaseDTO& v) {
    v.id = j.at("id").get<int64_t>;
    v.period = j.at("period").get<int32_t>;
    v.registrationTime = j.at("registrationTime").get<int64_t>;
    v.startTime = j.at("startTime").get<int64_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_TournamentPhaseDTO_HPP
