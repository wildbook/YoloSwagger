#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTournamentGameEnd_t {
    int64_t tournamentId;
    int64_t bracketId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentGameEnd_t& v) {
    j["tournamentId"] = v.tournamentId;
    j["bracketId"] = v.bracketId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentGameEnd_t& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.bracketId = j.at("bracketId").get<int64_t>();
  }
}
