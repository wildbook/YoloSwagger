#pragma once
#include <json.hpp>
#include <optional>
#include "TournamentDTO.hpp"
namespace leagueapi {
  struct TournamentHistoryAndWinnersDTO_t {
    std::string tournamentWinnersCompressed;
    std::vector<TournamentDTO_t> tournamentHistory;
  };

  inline void to_json(nlohmann::json& j, const TournamentHistoryAndWinnersDTO_t& v) {
    j["tournamentWinnersCompressed"] = v.tournamentWinnersCompressed;
    j["tournamentHistory"] = v.tournamentHistory;
  }

  inline void from_json(const nlohmann::json& j, TournamentHistoryAndWinnersDTO_t& v) {
    v.tournamentWinnersCompressed = j.at("tournamentWinnersCompressed").get<std::string>();
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<TournamentDTO_t>>();
  }
  inline std::string to_string(const TournamentHistoryAndWinnersDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
