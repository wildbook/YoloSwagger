#pragma once
#include <json.hpp>
#include <optional>
#include "TournamentDTO.hpp"
namespace leagueapi {
  struct TournamentHistoryAndWinnersDTO_t {
    std::vector<TournamentDTO_t> tournamentHistory;
    std::string_t tournamentWinnersCompressed;
  };

  inline void to_json(nlohmann::json& j, const TournamentHistoryAndWinnersDTO_t& v) {
    j["tournamentHistory"] = v.tournamentHistory;
    j["tournamentWinnersCompressed"] = v.tournamentWinnersCompressed;
  }

  inline void from_json(const nlohmann::json& j, TournamentHistoryAndWinnersDTO_t& v) {
    v.tournamentHistory = j.at("tournamentHistory").get<std::vector<TournamentDTO_t>>();
    v.tournamentWinnersCompressed = j.at("tournamentWinnersCompressed").get<std::string_t>();
  }
  inline std::string to_string(const TournamentHistoryAndWinnersDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
