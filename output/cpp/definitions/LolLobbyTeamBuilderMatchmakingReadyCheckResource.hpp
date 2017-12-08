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
    LolLobbyTeamBuilderMatchmakingReadyCheckState_t state;
    LolLobbyTeamBuilderMatchmakingDodgeWarning_t dodgeWarning;
    float timer;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    j["playerResponse"] = v.playerResponse;
    j["declinerIds"] = v.declinerIds;
    j["state"] = v.state;
    j["dodgeWarning"] = v.dodgeWarning;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t>();
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>();
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState_t>();
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning_t>();
    v.timer = j.at("timer").get<float>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
