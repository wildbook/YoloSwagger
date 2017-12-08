#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolItemSetsLoginSession_t {
    LolItemSetsLoginSessionStates_t state;
    uint64_t summonerId;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsLoginSession_t& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsLoginSession_t& v) {
    v.state = j.at("state").get<LolItemSetsLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolItemSetsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
