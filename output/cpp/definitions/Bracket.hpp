#pragma once
#include <json.hpp>
#include <optional>
#include "BracketRoster.hpp"
#include "BracketMatch.hpp"
namespace leagueapi {
  struct Bracket_t {
    std::vector<BracketMatch_t> loserBracketMatches;
    std::vector<BracketRoster_t> rosters;
    int32_t size;
    int64_t id;
    int64_t tournamentId;
    int32_t currentLoserRound;
    int32_t currentRound;
    std::vector<BracketMatch_t> matches;
    int64_t phaseId;
  };

  inline void to_json(nlohmann::json& j, const Bracket_t& v) {
    j["loserBracketMatches"] = v.loserBracketMatches;
    j["rosters"] = v.rosters;
    j["size"] = v.size;
    j["id"] = v.id;
    j["tournamentId"] = v.tournamentId;
    j["currentLoserRound"] = v.currentLoserRound;
    j["currentRound"] = v.currentRound;
    j["matches"] = v.matches;
    j["phaseId"] = v.phaseId;
  }

  inline void from_json(const nlohmann::json& j, Bracket_t& v) {
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch_t>>();
    v.rosters = j.at("rosters").get<std::vector<BracketRoster_t>>();
    v.size = j.at("size").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>();
    v.currentRound = j.at("currentRound").get<int32_t>();
    v.matches = j.at("matches").get<std::vector<BracketMatch_t>>();
    v.phaseId = j.at("phaseId").get<int64_t>();
  }
  inline std::string to_string(const Bracket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
