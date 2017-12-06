#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksLoginSessionState.hpp"
namespace leagueapi {
  struct LolPerksLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    LolPerksLoginSessionState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolPerksLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolPerksLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolPerksLoginSessionState_t>();
  }
}
