#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTBDMatchmakingState_t {
    int64_t estimatedMatchmakingTimeMillis;
    int64_t timeInMatchmakingMillis;
    std::string backwardsTransitionReason;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTBDMatchmakingState_t& v) {
    j["estimatedMatchmakingTimeMillis"] = v.estimatedMatchmakingTimeMillis;
    j["timeInMatchmakingMillis"] = v.timeInMatchmakingMillis;
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTBDMatchmakingState_t& v) {
    v.estimatedMatchmakingTimeMillis = j.at("estimatedMatchmakingTimeMillis").get<int64_t>();
    v.timeInMatchmakingMillis = j.at("timeInMatchmakingMillis").get<int64_t>();
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTBDMatchmakingState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
