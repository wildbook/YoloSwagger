#pragma once
#include <json.hpp>
#include <optional>
#include "LolFeaturedModesLoginSessionStates.hpp"
namespace leagueapi {
  struct LolFeaturedModesLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    LolFeaturedModesLoginSessionStates_t state;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolFeaturedModesLoginSessionStates_t>();
  }
}
