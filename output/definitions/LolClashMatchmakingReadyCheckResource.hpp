#ifndef SWAGGER_TYPES_LolClashMatchmakingReadyCheckResource_HPP
#define SWAGGER_TYPES_LolClashMatchmakingReadyCheckResource_HPP
#include <json.hpp>
#include "LolClashMatchmakingReadyCheckState.hpp"
#include "LolClashMatchmakingReadyCheckResponse.hpp"
namespace test {
  // 
  struct LolClashMatchmakingReadyCheckResource {
'    // 
    LolClashMatchmakingReadyCheckResponse playerResponse;
    // 
    LolClashMatchmakingReadyCheckState state;
  };

  void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckResource& v) {
    j["playerResponse"] = v.playerResponse;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckResource& v) {
    v.playerResponse = j.at("playerResponse").get<LolClashMatchmakingReadyCheckResponse>;
    v.state = j.at("state").get<LolClashMatchmakingReadyCheckState>;
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingReadyCheckResource_HPP
