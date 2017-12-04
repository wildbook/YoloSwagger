#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResource_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResource_HPP
#include <json.hpp>
#include "LolMatchmakingMatchmakingReadyCheckState.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResponse.hpp"
#include "LolMatchmakingMatchmakingDodgeWarning.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingMatchmakingReadyCheckResource {
    // 
    LolMatchmakingMatchmakingReadyCheckResponse playerResponse;
    // 
    std::vector<uint64_t> declinerIds;
    // 
    float timer;
    // 
    LolMatchmakingMatchmakingDodgeWarning dodgeWarning;
    // 
    bool suppressUx;
    // 
    LolMatchmakingMatchmakingReadyCheckState state;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckResource& v) {
    j["playerResponse"] = v.playerResponse;
    j["declinerIds"] = v.declinerIds;
    j["timer"] = v.timer;
    j["dodgeWarning"] = v.dodgeWarning;
    j["suppressUx"] = v.suppressUx;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckResource& v) {
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse>;
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>;
    v.timer = j.at("timer").get<float>;
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning>;
    v.suppressUx = j.at("suppressUx").get<bool>;
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResource_HPP
