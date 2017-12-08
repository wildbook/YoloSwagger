#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingReadyCheckResponse.hpp"
#include "LolMatchmakingMatchmakingDodgeWarning.hpp"
#include "LolMatchmakingMatchmakingReadyCheckState.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingReadyCheckResource_t {
    LolMatchmakingMatchmakingReadyCheckResponse_t playerResponse;
    LolMatchmakingMatchmakingDodgeWarning_t dodgeWarning;
    bool suppressUx;
    std::vector<uint64_t> declinerIds;
    LolMatchmakingMatchmakingReadyCheckState_t state;
    float timer;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckResource_t& v) {
    j["playerResponse"] = v.playerResponse;
    j["dodgeWarning"] = v.dodgeWarning;
    j["suppressUx"] = v.suppressUx;
    j["declinerIds"] = v.declinerIds;
    j["state"] = v.state;
    j["timer"] = v.timer;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckResource_t& v) {
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse_t>();
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning_t>();
    v.suppressUx = j.at("suppressUx").get<bool>();
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>();
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState_t>();
    v.timer = j.at("timer").get<float>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingReadyCheckResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
