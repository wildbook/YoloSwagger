#ifndef SWAGGER_TYPES_LolClashTournamentHistoryAndWinners_HPP
#define SWAGGER_TYPES_LolClashTournamentHistoryAndWinners_HPP
#include <json.hpp>
#include "LolClashTournament.hpp"
#include "LolClashTournamentWinnerHistory.hpp"
namespace leagueapi {
  // 
  struct LolClashTournamentHistoryAndWinners {
    // 
    LolClashTournamentWinnerHistory tournamentWinners;
    // 
    std::vector<LolClashTournament> tournamentHistory;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentHistoryAndWinners& v) {
    j["tournamentWinners"] = v.tournamentWinners;
    j["tournamentHistory"] = v.tournamentHistory;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentHistoryAndWinners& v) {
    v.tournamentWinners = j.at("tournamentWinners").get<LolClashTournamentWinnerHistory>;
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<LolClashTournament>>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentHistoryAndWinners_HPP
