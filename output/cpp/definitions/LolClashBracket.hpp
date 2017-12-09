#pragma once
#include <json.hpp>
#include <optional>
#include "BracketRoster.hpp"
#include "BracketMatch.hpp"
namespace leagueapi {
  struct LolClashBracket_t {
    bool isComplete;
    std::vector<BracketMatch_t> loserBracketMatches;
    int32_t period;
    int32_t size;
    int64_t id;
    int64_t tournamentId;
    int32_t currentLoserRound;
    int32_t currentRound;
    std::vector<BracketRoster_t> rosters;
    std::vector<BracketMatch_t> matches;
  };

  inline void to_json(nlohmann::json& j, const LolClashBracket_t& v) {
    j["isComplete"] = v.isComplete;
    j["loserBracketMatches"] = v.loserBracketMatches;
    j["period"] = v.period;
    j["size"] = v.size;
    j["id"] = v.id;
    j["tournamentId"] = v.tournamentId;
    j["currentLoserRound"] = v.currentLoserRound;
    j["currentRound"] = v.currentRound;
    j["rosters"] = v.rosters;
    j["matches"] = v.matches;
  }

  inline void from_json(const nlohmann::json& j, LolClashBracket_t& v) {
    v.isComplete = j.at("isComplete").get<bool>();
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch_t>>();
    v.period = j.at("period").get<int32_t>();
    v.size = j.at("size").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>();
    v.currentRound = j.at("currentRound").get<int32_t>();
    v.rosters = j.at("rosters").get<std::vector<BracketRoster_t>>();
    v.matches = j.at("matches").get<std::vector<BracketMatch_t>>();
  }
  inline std::string to_string(const LolClashBracket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
