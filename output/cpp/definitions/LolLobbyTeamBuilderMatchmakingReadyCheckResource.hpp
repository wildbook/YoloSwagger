#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource_t {
    std::vector<uint64_t> declinerIds;
    LolLobbyTeamBuilderMatchmakingDodgeWarning_t dodgeWarning;
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t playerResponse;
    LolLobbyTeamBuilderMatchmakingReadyCheckState_t state;
    float timer;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    j["declinerIds"] = v.declinerIds;
    j["dodgeWarning"] = v.dodgeWarning;
    j["playerResponse"] = v.playerResponse;
    j["state"] = v.state;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>();
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning_t>();
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t>();
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState_t>();
    v.timer = j.at("timer").get<float>();
  }
}
