#pragma once
#include <json.hpp>
#include <optional>
#include "BracketRoster.hpp"
#include "BracketMatch.hpp"
namespace leagueapi {
  struct Bracket_t {
    int32_t currentLoserRound;
    int32_t currentRound;
    std::vector<BracketMatch_t> matches;
    std::vector<BracketMatch_t> loserBracketMatches;
    int64_t tournamentId;
    std::vector<BracketRoster_t> rosters;
    int64_t phaseId;
    int64_t id;
    int32_t size;
  };

  inline void to_json(nlohmann::json& j, const Bracket_t& v) {
    j["currentLoserRound"] = v.currentLoserRound;
    j["currentRound"] = v.currentRound;
    j["matches"] = v.matches;
    j["loserBracketMatches"] = v.loserBracketMatches;
    j["tournamentId"] = v.tournamentId;
    j["rosters"] = v.rosters;
    j["phaseId"] = v.phaseId;
    j["id"] = v.id;
    j["size"] = v.size;
  }

  inline void from_json(const nlohmann::json& j, Bracket_t& v) {
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>();
    v.currentRound = j.at("currentRound").get<int32_t>();
    v.matches = j.at("matches").get<std::vector<BracketMatch_t>>();
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.rosters = j.at("rosters").get<std::vector<BracketRoster_t>>();
    v.phaseId = j.at("phaseId").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.size = j.at("size").get<int32_t>();
  }
  inline std::string to_string(const Bracket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
