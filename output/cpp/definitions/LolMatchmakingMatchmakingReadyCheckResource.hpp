#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingDodgeWarning.hpp"
#include "LolMatchmakingMatchmakingReadyCheckState.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResponse.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingReadyCheckResource_t {
    std::vector<uint64_t> declinerIds;
    LolMatchmakingMatchmakingDodgeWarning_t dodgeWarning;
    LolMatchmakingMatchmakingReadyCheckResponse_t playerResponse;
    LolMatchmakingMatchmakingReadyCheckState_t state;
    bool suppressUx;
    float timer;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckResource_t& v) {
    j["declinerIds"] = v.declinerIds;
    j["dodgeWarning"] = v.dodgeWarning;
    j["playerResponse"] = v.playerResponse;
    j["state"] = v.state;
    j["suppressUx"] = v.suppressUx;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckResource_t& v) {
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>();
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning_t>();
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse_t>();
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState_t>();
    v.suppressUx = j.at("suppressUx").get<bool>();
    v.timer = j.at("timer").get<float>();
  }
}
