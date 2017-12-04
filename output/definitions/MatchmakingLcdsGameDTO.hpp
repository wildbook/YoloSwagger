#ifndef SWAGGER_TYPES_MatchmakingLcdsGameDTO_HPP
#define SWAGGER_TYPES_MatchmakingLcdsGameDTO_HPP
#include <json.hpp>
#include "MatchmakingLcdsPlayerParticipant.hpp"
namespace leagueapi {
  // 
  struct MatchmakingLcdsGameDTO {
    // 
    std::string gameState;
    // 
    std::string statusOfParticipants;
    // 
    std::vector<MatchmakingLcdsPlayerParticipant> teamOne;
    // 
    std::vector<MatchmakingLcdsPlayerParticipant> teamTwo;
    // 
    std::string terminatedCondition;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsGameDTO& v) {
    j["gameState"] = v.gameState;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
    j["terminatedCondition"] = v.terminatedCondition;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsGameDTO& v) {
    v.gameState = j.at("gameState").get<std::string>;
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>;
    v.teamOne = j.at("teamOne").get<std::vector<MatchmakingLcdsPlayerParticipant>>;
    v.teamTwo = j.at("teamTwo").get<std::vector<MatchmakingLcdsPlayerParticipant>>;
    v.terminatedCondition = j.at("terminatedCondition").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsGameDTO_HPP
