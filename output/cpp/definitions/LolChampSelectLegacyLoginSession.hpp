#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyLoginSessionStates.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyLoginSession_t {
    uint64_t accountId;
    LolChampSelectLegacyLoginSessionStates_t state;
    bool connected;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolChampSelectLegacyLoginSessionStates_t>();
    v.connected = j.at("connected").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
