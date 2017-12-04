#ifndef SWAGGER_TYPES_Bracket_HPP
#define SWAGGER_TYPES_Bracket_HPP
#include <json.hpp>
#include "BracketMatch.hpp"
#include "BracketRoster.hpp"
namespace leagueapi {
  // 
  struct Bracket {
    // 
    int32_t currentLoserRound;
    // 
    int32_t currentRound;
    // 
    int64_t id;
    // 
    std::vector<BracketMatch> loserBracketMatches;
    // 
    std::vector<BracketMatch> matches;
    // 
    int64_t phaseId;
    // 
    std::vector<BracketRoster> rosters;
    // 
    int32_t size;
    // 
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const Bracket& v) {
    j["currentLoserRound"] = v.currentLoserRound;
    j["currentRound"] = v.currentRound;
    j["id"] = v.id;
    j["loserBracketMatches"] = v.loserBracketMatches;
    j["matches"] = v.matches;
    j["phaseId"] = v.phaseId;
    j["rosters"] = v.rosters;
    j["size"] = v.size;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, Bracket& v) {
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>;
    v.currentRound = j.at("currentRound").get<int32_t>;
    v.id = j.at("id").get<int64_t>;
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>;
    v.matches = j.at("matches").get<std::vector<BracketMatch>>;
    v.phaseId = j.at("phaseId").get<int64_t>;
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>;
    v.size = j.at("size").get<int32_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_Bracket_HPP
