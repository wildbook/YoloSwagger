#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTBDMatchmakingState_t {
    int64_t_t estimatedMatchmakingTimeMillis;
    std::string_t backwardsTransitionReason;
    int64_t_t timeInMatchmakingMillis;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTBDMatchmakingState_t& v) {
    j["estimatedMatchmakingTimeMillis"] = v.estimatedMatchmakingTimeMillis;
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
    j["timeInMatchmakingMillis"] = v.timeInMatchmakingMillis;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTBDMatchmakingState_t& v) {
    v.estimatedMatchmakingTimeMillis = j.at("estimatedMatchmakingTimeMillis").get<int64_t_t>();
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string_t>();
    v.timeInMatchmakingMillis = j.at("timeInMatchmakingMillis").get<int64_t_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTBDMatchmakingState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
