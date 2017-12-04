#ifndef SWAGGER_TYPES_LolClashTournamentSummary_HPP
#define SWAGGER_TYPES_LolClashTournamentSummary_HPP
#include <json.hpp>
#include "LolClashTournamentState.hpp"
namespace leagueapi {
  // 
  struct LolClashTournamentSummary {
    // 
    int64_t bracketId;
    // 
    std::string rosterId;
    // 
    int64_t tournamentId;
    // 
    LolClashTournamentState state;
  };

  inline void to_json(nlohmann::json& j, const LolClashTournamentSummary& v) {
    j["bracketId"] = v.bracketId;
    j["rosterId"] = v.rosterId;
    j["tournamentId"] = v.tournamentId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolClashTournamentSummary& v) {
    v.bracketId = j.at("bracketId").get<int64_t>;
    v.rosterId = j.at("rosterId").get<std::string>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.state = j.at("state").get<LolClashTournamentState>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentSummary_HPP
