#ifndef SWAGGER_TYPES_LolClashMatchmakingReadyCheckResource_HPP
#define SWAGGER_TYPES_LolClashMatchmakingReadyCheckResource_HPP
#include <json.hpp>
#include "LolClashMatchmakingReadyCheckState.hpp"
#include "LolClashMatchmakingReadyCheckResponse.hpp"
namespace leagueapi {
  // 
  struct LolClashMatchmakingReadyCheckResource {
    // 
    LolClashMatchmakingReadyCheckState state;
    // 
    LolClashMatchmakingReadyCheckResponse playerResponse;
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckResource& v) {
    j["state"] = v.state;
    j["playerResponse"] = v.playerResponse;
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckResource& v) {
    v.state = j.at("state").get<LolClashMatchmakingReadyCheckState>;
    v.playerResponse = j.at("playerResponse").get<LolClashMatchmakingReadyCheckResponse>;
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingReadyCheckResource_HPP
