#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameLoginSessionStates.hpp"
namespace leagueapi {
  struct LolEndOfGameLoginSession_t {
    uint64_t accountId;
    LolEndOfGameLoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolEndOfGameLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
