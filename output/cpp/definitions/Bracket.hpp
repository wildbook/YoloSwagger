#pragma once
#include <json.hpp>
#include <optional>
#include "BracketMatch.hpp"
#include "BracketRoster.hpp"
namespace leagueapi {
  struct Bracket_t {
    std::vector<BracketMatch_t> loserBracketMatches;
    int32_t currentRound;
    int64_t phaseId;
    int64_t tournamentId;
    std::vector<BracketMatch_t> matches;
    int32_t size;
    int32_t currentLoserRound;
    int64_t id;
    std::vector<BracketRoster_t> rosters;
  };

  inline void to_json(nlohmann::json& j, const Bracket_t& v) {
    j["loserBracketMatches"] = v.loserBracketMatches;
    j["currentRound"] = v.currentRound;
    j["phaseId"] = v.phaseId;
    j["tournamentId"] = v.tournamentId;
    j["matches"] = v.matches;
    j["size"] = v.size;
    j["currentLoserRound"] = v.currentLoserRound;
    j["id"] = v.id;
    j["rosters"] = v.rosters;
  }

  inline void from_json(const nlohmann::json& j, Bracket_t& v) {
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch_t>>();
    v.currentRound = j.at("currentRound").get<int32_t>();
    v.phaseId = j.at("phaseId").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.matches = j.at("matches").get<std::vector<BracketMatch_t>>();
    v.size = j.at("size").get<int32_t>();
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.rosters = j.at("rosters").get<std::vector<BracketRoster_t>>();
  }
  inline std::string to_string(const Bracket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
