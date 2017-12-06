#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  struct LolClashTournamentSummary_t {
    int64_t bracketId;
    std::string rosterId;
    LolClashTournamentState_t state;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentSummary_t& v) {
    j["bracketId"] = v.bracketId;
    j["rosterId"] = v.rosterId;
    j["state"] = v.state;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentSummary_t& v) {
    v.bracketId = j.at("bracketId").get<int64_t>();
    v.rosterId = j.at("rosterId").get<std::string>();
    v.state = j.at("state").get<LolClashTournamentState_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
}
