#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingLoginSessionState.hpp"
namespace leagueapi {
  struct LolMatchmakingLoginSession_t {
    uint64_t accountId;
    bool connected;
    LolMatchmakingLoginSessionState_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.connected = j.at("connected").get<bool>();
    v.state = j.at("state").get<LolMatchmakingLoginSessionState_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
