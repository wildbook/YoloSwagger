#ifndef SWAGGER_TYPES_LolClashBracket_HPP
#define SWAGGER_TYPES_LolClashBracket_HPP
#include <json.hpp>
#include "BracketRoster.hpp"
#include "BracketMatch.hpp"
namespace leagueapi {
  // 
  struct LolClashBracket {
    // 
    int32_t currentLoserRound;
    // 
    int32_t currentRound;
    // 
    std::vector<BracketMatch> matches;
    // 
    int32_t period;
    // 
    bool isComplete;
    // 
    int64_t tournamentId;
    // 
    std::vector<BracketRoster> rosters;
    // 
    std::vector<BracketMatch> loserBracketMatches;
    // 
    int64_t id;
    // 
    int32_t size;
  };

  inline void to_json(nlohmann::json& j, const LolClashBracket& v) {
    j["currentLoserRound"] = v.currentLoserRound;
    j["currentRound"] = v.currentRound;
    j["matches"] = v.matches;
    j["period"] = v.period;
    j["isComplete"] = v.isComplete;
    j["tournamentId"] = v.tournamentId;
    j["rosters"] = v.rosters;
    j["loserBracketMatches"] = v.loserBracketMatches;
    j["id"] = v.id;
    j["size"] = v.size;
  }

  inline void from_json(const nlohmann::json& j, LolClashBracket& v) {
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>;
    v.currentRound = j.at("currentRound").get<int32_t>;
    v.matches = j.at("matches").get<std::vector<BracketMatch>>;
    v.period = j.at("period").get<int32_t>;
    v.isComplete = j.at("isComplete").get<bool>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>;
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>;
    v.id = j.at("id").get<int64_t>;
    v.size = j.at("size").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashBracket_HPP
