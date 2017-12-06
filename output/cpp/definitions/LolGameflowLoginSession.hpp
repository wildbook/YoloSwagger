#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowLoginSessionStates.hpp"
namespace leagueapi {
  struct LolGameflowLoginSession_t {
    bool connected;
    uint64_t accountId;
    uint64_t summonerId;
    LolGameflowLoginSessionStates_t state;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowLoginSession_t& v) {
    j["connected"] = v.connected;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowLoginSession_t& v) {
    v.connected = j.at("connected").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolGameflowLoginSessionStates_t>();
  }
}
