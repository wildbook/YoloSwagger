#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  struct LolClashTournamentSummary_t {
    int64_t tournamentId;
    std::string rosterId;
    LolClashTournamentState_t state;
    int64_t bracketId;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentSummary_t& v) {
    j["tournamentId"] = v.tournamentId;
    j["rosterId"] = v.rosterId;
    j["state"] = v.state;
    j["bracketId"] = v.bracketId;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentSummary_t& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.rosterId = j.at("rosterId").get<std::string>();
    v.state = j.at("state").get<LolClashTournamentState_t>();
    v.bracketId = j.at("bracketId").get<int64_t>();
  }
  inline std::string to_string(const LolClashTournamentSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
