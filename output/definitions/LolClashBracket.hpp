#ifndef SWAGGER_TYPES_LolClashBracket_HPP
#define SWAGGER_TYPES_LolClashBracket_HPP
#include <json.hpp>
#include "BracketRoster.hpp"
#include "BracketMatch.hpp"
namespace test {
  // 
  struct LolClashBracket {
'    // 
    int32_t currentLoserRound;
    // 
    int32_t currentRound;
    // 
    int64_t id;
    // 
    bool isComplete;
    // 
    std::vector<BracketMatch> loserBracketMatches;
    // 
    std::vector<BracketMatch> matches;
    // 
    int32_t period;
    // 
    std::vector<BracketRoster> rosters;
    // 
    int32_t size;
    // 
    int64_t tournamentId;
  };

  void to_json(nlohmann::json& j, const LolClashBracket& v) {
    j["currentLoserRound"] = v.currentLoserRound;
    j["currentRound"] = v.currentRound;
    j["id"] = v.id;
    j["isComplete"] = v.isComplete;
    j["loserBracketMatches"] = v.loserBracketMatches;
    j["matches"] = v.matches;
    j["period"] = v.period;
    j["rosters"] = v.rosters;
    j["size"] = v.size;
    j["tournamentId"] = v.tournamentId;
  }

  void from_json(const nlohmann::json& j, LolClashBracket& v) {
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>;
    v.currentRound = j.at("currentRound").get<int32_t>;
    v.id = j.at("id").get<int64_t>;
    v.isComplete = j.at("isComplete").get<bool>;
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>;
    v.matches = j.at("matches").get<std::vector<BracketMatch>>;
    v.period = j.at("period").get<int32_t>;
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>;
    v.size = j.at("size").get<int32_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashBracket_HPP
