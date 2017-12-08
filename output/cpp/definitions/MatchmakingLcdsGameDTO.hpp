#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct MatchmakingLcdsGameDTO_t {
    std::vector<MatchmakingLcdsPlayerParticipant_t> teamTwo;
    std::string statusOfParticipants;
    std::string gameState;
    std::string terminatedCondition;
    std::vector<MatchmakingLcdsPlayerParticipant_t> teamOne;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsGameDTO_t& v) {
    j["teamTwo"] = v.teamTwo;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["gameState"] = v.gameState;
    j["terminatedCondition"] = v.terminatedCondition;
    j["teamOne"] = v.teamOne;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsGameDTO_t& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<MatchmakingLcdsPlayerParticipant_t>>();
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>();
    v.gameState = j.at("gameState").get<std::string>();
    v.terminatedCondition = j.at("terminatedCondition").get<std::string>();
    v.teamOne = j.at("teamOne").get<std::vector<MatchmakingLcdsPlayerParticipant_t>>();
  }
  inline std::string to_string(const MatchmakingLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
