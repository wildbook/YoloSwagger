#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingReadyCheckState.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResponse.hpp"
#include "LolMatchmakingMatchmakingDodgeWarning.hpp"
namespace leagueapi {
  struct LolMatchmakingMatchmakingReadyCheckResource_t {
    LolMatchmakingMatchmakingReadyCheckResponse_t playerResponse;
    std::vector<uint64_t> declinerIds;
    float_t timer;
    LolMatchmakingMatchmakingDodgeWarning_t dodgeWarning;
    bool_t suppressUx;
    LolMatchmakingMatchmakingReadyCheckState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckResource_t& v) {
    j["playerResponse"] = v.playerResponse;
    j["declinerIds"] = v.declinerIds;
    j["timer"] = v.timer;
    j["dodgeWarning"] = v.dodgeWarning;
    j["suppressUx"] = v.suppressUx;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckResource_t& v) {
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse_t>();
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>();
    v.timer = j.at("timer").get<float_t>();
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning_t>();
    v.suppressUx = j.at("suppressUx").get<bool_t>();
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState_t>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingReadyCheckResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
