#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTBDMatchmakingState_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTBDMatchmakingState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTBDMatchmakingState {
    // 
    std::string backwardsTransitionReason;
    // 
    int64_t estimatedMatchmakingTimeMillis;
    // 
    int64_t timeInMatchmakingMillis;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTBDMatchmakingState& v) {
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
    j["estimatedMatchmakingTimeMillis"] = v.estimatedMatchmakingTimeMillis;
    j["timeInMatchmakingMillis"] = v.timeInMatchmakingMillis;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTBDMatchmakingState& v) {
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>;
    v.estimatedMatchmakingTimeMillis = j.at("estimatedMatchmakingTimeMillis").get<int64_t>;
    v.timeInMatchmakingMillis = j.at("timeInMatchmakingMillis").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTBDMatchmakingState_HPP
