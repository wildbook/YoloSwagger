#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolCollectionsLoginSession_t {
    uint64_t summonerId;
    uint64_t accountId;
    LolCollectionsLoginSessionStates_t state;
    bool connected;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsLoginSession_t& v) {
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["connected"] = v.connected;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsLoginSession_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolCollectionsLoginSessionStates_t>();
    v.connected = j.at("connected").get<bool>();
  }
  inline std::string to_string(const LolCollectionsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
