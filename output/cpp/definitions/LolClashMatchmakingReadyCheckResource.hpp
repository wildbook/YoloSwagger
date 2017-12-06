#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashMatchmakingReadyCheckState.hpp"
#include "LolClashMatchmakingReadyCheckResponse.hpp"
namespace leagueapi {
  struct LolClashMatchmakingReadyCheckResource_t {
    LolClashMatchmakingReadyCheckResponse_t playerResponse;
    LolClashMatchmakingReadyCheckState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckResource_t& v) {
    j["playerResponse"] = v.playerResponse;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckResource_t& v) {
    v.playerResponse = j.at("playerResponse").get<LolClashMatchmakingReadyCheckResponse_t>();
    v.state = j.at("state").get<LolClashMatchmakingReadyCheckState_t>();
  }
}
