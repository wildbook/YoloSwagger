#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct TournamentPhaseDTO_t {
    int64_t_t registrationTime;
    int64_t_t tournamentId;
    int64_t_t id;
    int64_t_t startTime;
    int32_t_t period;
  };

  inline void to_json(nlohmann::json& j, const TournamentPhaseDTO_t& v) {
    j["registrationTime"] = v.registrationTime;
    j["tournamentId"] = v.tournamentId;
    j["id"] = v.id;
    j["startTime"] = v.startTime;
    j["period"] = v.period;
  }

  inline void from_json(const nlohmann::json& j, TournamentPhaseDTO_t& v) {
    v.registrationTime = j.at("registrationTime").get<int64_t_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t_t>();
    v.id = j.at("id").get<int64_t_t>();
    v.startTime = j.at("startTime").get<int64_t_t>();
    v.period = j.at("period").get<int32_t_t>();
  }
  inline std::string to_string(const TournamentPhaseDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
