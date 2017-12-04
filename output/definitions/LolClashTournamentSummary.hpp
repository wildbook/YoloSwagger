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
    LolClashTournamentState state;
    // 
    int64_t tournamentId;
  };

  void to_json(nlohmann::json& j, const LolClashTournamentSummary& v) {
    j["bracketId"] = v.bracketId;
    j["rosterId"] = v.rosterId;
    j["state"] = v.state;
    j["tournamentId"] = v.tournamentId;
  }

  void from_json(const nlohmann::json& j, LolClashTournamentSummary& v) {
    v.bracketId = j.at("bracketId").get<int64_t>;
    v.rosterId = j.at("rosterId").get<std::string>;
    v.state = j.at("state").get<LolClashTournamentState>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashTournamentSummary_HPP
