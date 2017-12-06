#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  struct LolClashTournamentSummary_t {
    int64_t tournamentId;
    int64_t bracketId;
    LolClashTournamentState_t state;
    std::string rosterId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentSummary_t& v) {
    j["tournamentId"] = v.tournamentId;
    j["bracketId"] = v.bracketId;
    j["state"] = v.state;
    j["rosterId"] = v.rosterId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentSummary_t& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.bracketId = j.at("bracketId").get<int64_t>();
    v.state = j.at("state").get<LolClashTournamentState_t>();
    v.rosterId = j.at("rosterId").get<std::string>();
  }
}
