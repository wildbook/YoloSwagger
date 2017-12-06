#pragma once
#include <json.hpp>
#include <optional>
#include "BracketMatch.hpp"
#include "BracketRoster.hpp"
namespace leagueapi {
  struct Bracket_t {
    int32_t currentLoserRound;
    int32_t currentRound;
    int64_t id;
    std::vector<BracketMatch_t> loserBracketMatches;
    std::vector<BracketMatch_t> matches;
    int64_t phaseId;
    std::vector<BracketRoster_t> rosters;
    int32_t size;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const Bracket_t& v) {
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

  inline void from_json(const nlohmann::json& j, Bracket_t& v) {
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>();
    v.currentRound = j.at("currentRound").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch_t>>();
    v.matches = j.at("matches").get<std::vector<BracketMatch_t>>();
    v.phaseId = j.at("phaseId").get<int64_t>();
    v.rosters = j.at("rosters").get<std::vector<BracketRoster_t>>();
    v.size = j.at("size").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
}
