#pragma once
#include <json.hpp>
#include <optional>
#include "LolRankedStatsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolRankedStatsLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    LolRankedStatsLoginSessionStates_t state;
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolRankedStatsLoginSessionStates_t>();
  }
}
