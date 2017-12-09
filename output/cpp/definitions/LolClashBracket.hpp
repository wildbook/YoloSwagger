#pragma once
#include <json.hpp>
#include <optional>
#include "BracketRoster.hpp"
#include "BracketMatch.hpp"
namespace leagueapi {
  struct LolClashBracket_t {
    int32_t size;
    bool isComplete;
    int64_t id;
    int64_t tournamentId;
    int32_t currentLoserRound;
    int32_t currentRound;
    std::vector<BracketMatch_t> loserBracketMatches;
    int32_t period;
    std::vector<BracketMatch_t> matches;
    std::vector<BracketRoster_t> rosters;
  };

  inline void to_json(nlohmann::json& j, const LolClashBracket_t& v) {
    j["size"] = v.size;
    j["isComplete"] = v.isComplete;
    j["id"] = v.id;
    j["tournamentId"] = v.tournamentId;
    j["currentLoserRound"] = v.currentLoserRound;
    j["currentRound"] = v.currentRound;
    j["loserBracketMatches"] = v.loserBracketMatches;
    j["period"] = v.period;
    j["matches"] = v.matches;
    j["rosters"] = v.rosters;
  }

  inline void from_json(const nlohmann::json& j, LolClashBracket_t& v) {
    v.size = j.at("size").get<int32_t>();
    v.isComplete = j.at("isComplete").get<bool>();
    v.id = j.at("id").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>();
    v.currentRound = j.at("currentRound").get<int32_t>();
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch_t>>();
    v.period = j.at("period").get<int32_t>();
    v.matches = j.at("matches").get<std::vector<BracketMatch_t>>();
    v.rosters = j.at("rosters").get<std::vector<BracketRoster_t>>();
  }
  inline std::string to_string(const LolClashBracket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
