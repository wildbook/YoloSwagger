#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct MatchmakingLcdsGameDTO_t {
    std::vector<MatchmakingLcdsPlayerParticipant_t> teamOne;
    std::string gameState;
    std::vector<MatchmakingLcdsPlayerParticipant_t> teamTwo;
    std::string terminatedCondition;
    std::string statusOfParticipants;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsGameDTO_t& v) {
    j["teamOne"] = v.teamOne;
    j["gameState"] = v.gameState;
    j["teamTwo"] = v.teamTwo;
    j["terminatedCondition"] = v.terminatedCondition;
    j["statusOfParticipants"] = v.statusOfParticipants;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsGameDTO_t& v) {
    v.teamOne = j.at("teamOne").get<std::vector<MatchmakingLcdsPlayerParticipant_t>>();
    v.gameState = j.at("gameState").get<std::string>();
    v.teamTwo = j.at("teamTwo").get<std::vector<MatchmakingLcdsPlayerParticipant_t>>();
    v.terminatedCondition = j.at("terminatedCondition").get<std::string>();
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>();
  }
  inline std::string to_string(const MatchmakingLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
