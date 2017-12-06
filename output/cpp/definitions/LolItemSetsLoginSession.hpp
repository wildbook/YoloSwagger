#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolItemSetsLoginSession_t {
    uint64_t accountId;
    LolItemSetsLoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolItemSetsLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
