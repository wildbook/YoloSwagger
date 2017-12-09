#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryLoginSessionStates.hpp"
namespace leagueapi {
  struct LolMatchHistoryLoginSession_t {
    uint64_t accountId;
    LolMatchHistoryLoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolMatchHistoryLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
