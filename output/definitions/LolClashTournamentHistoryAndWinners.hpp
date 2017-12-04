#ifndef SWAGGER_TYPES_LolClashTournamentHistoryAndWinners_HPP
#define SWAGGER_TYPES_LolClashTournamentHistoryAndWinners_HPP
#include <json.hpp>
#include "LolClashTournament.hpp"
#include "LolClashTournamentWinnerHistory.hpp"
namespace leagueapi {
  // 
  struct LolClashTournamentHistoryAndWinners {
    // 
    std::vector<LolClashTournament> tournamentHistory;
    // 
    LolClashTournamentWinnerHistory tournamentWinners;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentHistoryAndWinners& v) {
    j["tournamentHistory"] = v.tournamentHistory;
    j["tournamentWinners"] = v.tournamentWinners;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentHistoryAndWinners& v) {
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<LolClashTournament>>;
    v.tournamentWinners = j.at("tournamentWinners").get<LolClashTournamentWinnerHistory>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentHistoryAndWinners_HPP
