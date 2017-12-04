#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResource_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResource_HPP
#include <json.hpp>
#include "LolMatchmakingMatchmakingDodgeWarning.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResponse.hpp"
#include "LolMatchmakingMatchmakingReadyCheckState.hpp"
namespace test {
  // 
  struct LolMatchmakingMatchmakingReadyCheckResource {
'    // 
    std::vector<uint64_t> declinerIds;
    // 
    LolMatchmakingMatchmakingDodgeWarning dodgeWarning;
    // 
    LolMatchmakingMatchmakingReadyCheckResponse playerResponse;
    // 
    LolMatchmakingMatchmakingReadyCheckState state;
    // 
    bool suppressUx;
    // 
    float timer;
  };

  void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckResource& v) {
    j["declinerIds"] = v.declinerIds;
    j["dodgeWarning"] = v.dodgeWarning;
    j["playerResponse"] = v.playerResponse;
    j["state"] = v.state;
    j["suppressUx"] = v.suppressUx;
    j["timer"] = v.timer;
  }

  void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckResource& v) {
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>;
    v.dodgeWarning = j.at("dodgeWarning").get<LolMatchmakingMatchmakingDodgeWarning>;
    v.playerResponse = j.at("playerResponse").get<LolMatchmakingMatchmakingReadyCheckResponse>;
    v.state = j.at("state").get<LolMatchmakingMatchmakingReadyCheckState>;
    v.suppressUx = j.at("suppressUx").get<bool>;
    v.timer = j.at("timer").get<float>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckResource_HPP
