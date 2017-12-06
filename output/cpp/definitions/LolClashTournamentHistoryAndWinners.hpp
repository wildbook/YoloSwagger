#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentWinnerHistory.hpp"
#include "LolClashTournament.hpp"
namespace leagueapi {
  struct LolClashTournamentHistoryAndWinners_t {
    std::vector<LolClashTournament_t> tournamentHistory;
    LolClashTournamentWinnerHistory_t tournamentWinners;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentHistoryAndWinners_t& v) {
    j["tournamentHistory"] = v.tournamentHistory;
    j["tournamentWinners"] = v.tournamentWinners;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentHistoryAndWinners_t& v) {
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<LolClashTournament_t>>();
    v.tournamentWinners = j.at("tournamentWinners").get<LolClashTournamentWinnerHistory_t>();
  }
}
