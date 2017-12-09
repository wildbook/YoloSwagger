#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournament.hpp"
#include "LolClashTournamentWinnerHistory.hpp"
namespace leagueapi {
  struct LolClashTournamentHistoryAndWinners_t {
    LolClashTournamentWinnerHistory_t tournamentWinners;
    std::vector<LolClashTournament_t> tournamentHistory;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentHistoryAndWinners_t& v) {
    j["tournamentWinners"] = v.tournamentWinners;
    j["tournamentHistory"] = v.tournamentHistory;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentHistoryAndWinners_t& v) {
    v.tournamentWinners = j.at("tournamentWinners").get<LolClashTournamentWinnerHistory_t>();
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<LolClashTournament_t>>();
  }
  inline std::string to_string(const LolClashTournamentHistoryAndWinners_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
