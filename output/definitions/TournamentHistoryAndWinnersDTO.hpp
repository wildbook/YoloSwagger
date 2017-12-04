#ifndef SWAGGER_TYPES_TournamentHistoryAndWinnersDTO_HPP
#define SWAGGER_TYPES_TournamentHistoryAndWinnersDTO_HPP
#include <json.hpp>
#include "TournamentDTO.hpp"
namespace leagueapi {
  // 
  struct TournamentHistoryAndWinnersDTO {
    // 
    std::vector<TournamentDTO> tournamentHistory;
    // 
    std::string tournamentWinnersCompressed;
  };

  void to_json(nlohmann::json& j, const TournamentHistoryAndWinnersDTO& v) {
    j["tournamentHistory"] = v.tournamentHistory;
    j["tournamentWinnersCompressed"] = v.tournamentWinnersCompressed;
  }

  void from_json(const nlohmann::json& j, TournamentHistoryAndWinnersDTO& v) {
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<TournamentDTO>>;
    v.tournamentWinnersCompressed = j.at("tournamentWinnersCompressed").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_TournamentHistoryAndWinnersDTO_HPP
