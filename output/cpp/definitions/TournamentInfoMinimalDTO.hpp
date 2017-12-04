#ifndef SWAGGER_TYPES_TournamentInfoMinimalDTO_HPP
#define SWAGGER_TYPES_TournamentInfoMinimalDTO_HPP
#include <json.hpp>
#include "TournamentInfoDTO.hpp"
namespace leagueapi {
  // 
  struct TournamentInfoMinimalDTO {
    // 
    std::vector<TournamentInfoDTO> tournamentInfo;
    // 
    int64_t time;
  };

  inline void to_json(nlohmann::json& j, const TournamentInfoMinimalDTO& v) {
    j["tournamentInfo"] = v.tournamentInfo;
    j["time"] = v.time;
  }

  inline void from_json(const nlohmann::json& j, TournamentInfoMinimalDTO& v) {
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>;
    v.time = j.at("time").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_TournamentInfoMinimalDTO_HPP
