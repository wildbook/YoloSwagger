#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingReadyCheckState.hpp"
#include "LolMatchmakingMatchmakingDodgeWarning.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResponse.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingReadyCheckResource_t {
    LolMatchmakingMatchmakingReadyCheckResponse_t playerResponse;
    bool suppressUx;
    LolMatchmakingMatchmakingReadyCheckState_t state;
    LolMatchmakingMatchmakingDodgeWarning_t dodgeWarning;
    std::vector<uint64_t> declinerIds;
    float timer;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckResource_t& v) {
    j["playerResponse"] = v.playerResponse;
    j["suppressUx"] = v.suppressUx;
    j["state"] = v.state;
    j["dodgeWarning"] = v.dodgeWarning;
    j["declinerIds"] = v.declinerIds;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckResource_t& v) {
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse_t>();
    v.suppressUx = j.at("suppressUx").get<bool>();
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState_t>();
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning_t>();
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>();
    v.timer = j.at("timer").get<float>();
  }
}
