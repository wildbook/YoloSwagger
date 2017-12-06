#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolCollectionsLoginSession_t {
    bool connected;
    uint64_t accountId;
    uint64_t summonerId;
    LolCollectionsLoginSessionStates_t state;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsLoginSession_t& v) {
    j["connected"] = v.connected;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsLoginSession_t& v) {
    v.connected = j.at("connected").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.state = j.at("state").get<LolCollectionsLoginSessionStates_t>();
  }
}
