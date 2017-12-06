#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingLoginSessionState.hpp"
namespace leagueapi {
  struct LolMatchmakingLoginSession_t {
    bool connected;
    uint64_t accountId;
    uint64_t summonerId;
    LolMatchmakingLoginSessionState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLoginSession_t& v) {
    j["connected"] = v.connected;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLoginSession_t& v) {
    v.connected = j.at("connected").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolMatchmakingLoginSessionState_t>();
  }
}
