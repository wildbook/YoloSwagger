#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource_t {
    LolLobbyTeamBuilderMatchmakingReadyCheckState_t state;
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t playerResponse;
    float timer;
    LolLobbyTeamBuilderMatchmakingDodgeWarning_t dodgeWarning;
    std::vector<uint64_t> declinerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    j["state"] = v.state;
    j["playerResponse"] = v.playerResponse;
    j["timer"] = v.timer;
    j["dodgeWarning"] = v.dodgeWarning;
    j["declinerIds"] = v.declinerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState_t>();
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t>();
    v.timer = j.at("timer").get<float>();
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning_t>();
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingReadyCheckResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
