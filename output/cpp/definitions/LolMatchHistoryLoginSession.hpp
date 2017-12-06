#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryLoginSessionStates.hpp"
namespace leagueapi {
  struct LolMatchHistoryLoginSession_t {
    uint64_t accountId;
    uint64_t summonerId;
    LolMatchHistoryLoginSessionStates_t state;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolMatchHistoryLoginSessionStates_t>();
  }
}
