#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashMatchmakingReadyCheckState.hpp"
#include "LolClashMatchmakingReadyCheckResponse.hpp"
namespace leagueapi {
  struct LolClashMatchmakingReadyCheckResource_t {
    LolClashMatchmakingReadyCheckState_t state;
    LolClashMatchmakingReadyCheckResponse_t playerResponse;
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckResource_t& v) {
    j["state"] = v.state;
    j["playerResponse"] = v.playerResponse;
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckResource_t& v) {
    v.state = j.at("state").get<LolClashMatchmakingReadyCheckState_t>();
    v.playerResponse = j.at("playerResponse").get<LolClashMatchmakingReadyCheckResponse_t>();
  }
  inline std::string to_string(const LolClashMatchmakingReadyCheckResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
