#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyLoginSessionStates.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyLoginSession_t {
    uint64_t accountId;
    bool connected;
    LolChampSelectLegacyLoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.connected = j.at("connected").get<bool>();
    v.state = j.at("state").get<LolChampSelectLegacyLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
