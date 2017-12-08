#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource_t {
    LolLobbyTeamBuilderMatchmakingReadyCheckState_t state;
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t playerResponse;
    std::vector<uint64_t> declinerIds;
    float timer;
    LolLobbyTeamBuilderMatchmakingDodgeWarning_t dodgeWarning;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    j["state"] = v.state;
    j["playerResponse"] = v.playerResponse;
    j["declinerIds"] = v.declinerIds;
    j["timer"] = v.timer;
    j["dodgeWarning"] = v.dodgeWarning;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState_t>();
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t>();
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>();
    v.timer = j.at("timer").get<float>();
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
