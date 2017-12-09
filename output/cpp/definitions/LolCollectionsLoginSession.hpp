#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsLoginSessionStates.hpp"
namespace leagueapi {
  struct LolCollectionsLoginSession_t {
    bool connected;
    LolCollectionsLoginSessionStates_t state;
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsLoginSession_t& v) {
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsLoginSession_t& v) {
    v.connected = j.at("connected").get<bool>();
    v.state = j.at("state").get<LolCollectionsLoginSessionStates_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolCollectionsLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
