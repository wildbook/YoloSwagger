#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashTournamentGameEnd_t {
    int64_t bracketId;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentGameEnd_t& v) {
    j["bracketId"] = v.bracketId;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentGameEnd_t& v) {
    v.bracketId = j.at("bracketId").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
}
