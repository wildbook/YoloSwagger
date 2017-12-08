#pragma once
#include <json.hpp>
#include <optional>
#include "BracketMatch.hpp"
#include "BracketRoster.hpp"
namespace leagueapi {
  struct LolClashBracket_t {
    int32_t period;
    int32_t currentRound;
    int64_t id;
    std::vector<BracketMatch_t> matches;
    bool isComplete;
    std::vector<BracketRoster_t> rosters;
    int32_t size;
    int32_t currentLoserRound;
    int64_t tournamentId;
    std::vector<BracketMatch_t> loserBracketMatches;
  };

  inline void to_json(nlohmann::json& j, const LolClashBracket_t& v) {
    j["period"] = v.period;
    j["currentRound"] = v.currentRound;
    j["id"] = v.id;
    j["matches"] = v.matches;
    j["isComplete"] = v.isComplete;
    j["rosters"] = v.rosters;
    j["size"] = v.size;
    j["currentLoserRound"] = v.currentLoserRound;
    j["tournamentId"] = v.tournamentId;
    j["loserBracketMatches"] = v.loserBracketMatches;
  }

  inline void from_json(const nlohmann::json& j, LolClashBracket_t& v) {
    v.period = j.at("period").get<int32_t>();
    v.currentRound = j.at("currentRound").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.matches = j.at("matches").get<std::vector<BracketMatch_t>>();
    v.isComplete = j.at("isComplete").get<bool>();
    v.rosters = j.at("rosters").get<std::vector<BracketRoster_t>>();
    v.size = j.at("size").get<int32_t>();
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch_t>>();
  }
  inline std::string to_string(const LolClashBracket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
