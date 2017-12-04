#ifndef SWAGGER_TYPES_MatchmakingLcdsGameDTO_HPP
#define SWAGGER_TYPES_MatchmakingLcdsGameDTO_HPP
#include <json.hpp>
#include "MatchmakingLcdsPlayerParticipant.hpp"
namespace leagueapi {
  // 
  struct MatchmakingLcdsGameDTO {
    // 
    std::vector<MatchmakingLcdsPlayerParticipant> teamTwo;
    // 
    std::string statusOfParticipants;
    // 
    std::string gameState;
    // 
    std::string terminatedCondition;
    // 
    std::vector<MatchmakingLcdsPlayerParticipant> teamOne;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsGameDTO& v) {
    j["teamTwo"] = v.teamTwo;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["gameState"] = v.gameState;
    j["terminatedCondition"] = v.terminatedCondition;
    j["teamOne"] = v.teamOne;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsGameDTO& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<MatchmakingLcdsPlayerParticipant>>;
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>;
    v.gameState = j.at("gameState").get<std::string>;
    v.terminatedCondition = j.at("terminatedCondition").get<std::string>;
    v.teamOne = j.at("teamOne").get<std::vector<MatchmakingLcdsPlayerParticipant>>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsGameDTO_HPP
