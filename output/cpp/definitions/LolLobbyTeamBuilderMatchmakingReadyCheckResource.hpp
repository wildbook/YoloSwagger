#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource_t {
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t playerResponse;
    std::vector<uint64_t> declinerIds;
    float timer;
    LolLobbyTeamBuilderMatchmakingReadyCheckState_t state;
    LolLobbyTeamBuilderMatchmakingDodgeWarning_t dodgeWarning;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    j["playerResponse"] = v.playerResponse;
    j["declinerIds"] = v.declinerIds;
    j["timer"] = v.timer;
    j["state"] = v.state;
    j["dodgeWarning"] = v.dodgeWarning;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t>();
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>();
    v.timer = j.at("timer").get<float>();
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState_t>();
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning_t>();
  }
}
