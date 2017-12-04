#ifndef SWAGGER_TYPES_TournamentInfoMinimalDTO_HPP
#define SWAGGER_TYPES_TournamentInfoMinimalDTO_HPP
#include <json.hpp>
#include "TournamentInfoDTO.hpp"
namespace leagueapi {
  // 
  struct TournamentInfoMinimalDTO {
    // 
    int64_t time;
    // 
    std::vector<TournamentInfoDTO> tournamentInfo;
  };

  void to_json(nlohmann::json& j, const TournamentInfoMinimalDTO& v) {
    j["time"] = v.time;
    j["tournamentInfo"] = v.tournamentInfo;
  }

  void from_json(const nlohmann::json& j, TournamentInfoMinimalDTO& v) {
    v.time = j.at("time").get<int64_t>;
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>;
  }

}
#endif // SWAGGER_TYPES_TournamentInfoMinimalDTO_HPP
