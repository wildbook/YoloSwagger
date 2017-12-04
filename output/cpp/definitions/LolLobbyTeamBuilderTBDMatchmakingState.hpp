#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTBDMatchmakingState_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTBDMatchmakingState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTBDMatchmakingState {
    // 
    int64_t estimatedMatchmakingTimeMillis;
    // 
    std::string backwardsTransitionReason;
    // 
    int64_t timeInMatchmakingMillis;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTBDMatchmakingState& v) {
    j["estimatedMatchmakingTimeMillis"] = v.estimatedMatchmakingTimeMillis;
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
    j["timeInMatchmakingMillis"] = v.timeInMatchmakingMillis;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTBDMatchmakingState& v) {
    v.estimatedMatchmakingTimeMillis = j.at("estimatedMatchmakingTimeMillis").get<int64_t>;
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>;
    v.timeInMatchmakingMillis = j.at("timeInMatchmakingMillis").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTBDMatchmakingState_HPP
