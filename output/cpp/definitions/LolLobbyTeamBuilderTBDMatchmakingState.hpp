#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTBDMatchmakingState_t {
    std::string backwardsTransitionReason;
    int64_t timeInMatchmakingMillis;
    int64_t estimatedMatchmakingTimeMillis;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTBDMatchmakingState_t& v) {
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
    j["timeInMatchmakingMillis"] = v.timeInMatchmakingMillis;
    j["estimatedMatchmakingTimeMillis"] = v.estimatedMatchmakingTimeMillis;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTBDMatchmakingState_t& v) {
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>();
    v.timeInMatchmakingMillis = j.at("timeInMatchmakingMillis").get<int64_t>();
    v.estimatedMatchmakingTimeMillis = j.at("estimatedMatchmakingTimeMillis").get<int64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTBDMatchmakingState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
