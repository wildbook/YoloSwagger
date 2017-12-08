#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyLoginSessionStates.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyLoginSession_t {
    LolChampSelectLegacyLoginSessionStates_t state;
    bool_t connected;
    uint64_t_t summonerId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLoginSession_t& v) {
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLoginSession_t& v) {
    v.state = j.at("state").get<LolChampSelectLegacyLoginSessionStates_t>();
    v.connected = j.at("connected").get<bool_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
