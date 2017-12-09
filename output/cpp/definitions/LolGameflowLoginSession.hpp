#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowLoginSessionStates.hpp"
namespace leagueapi {
  struct LolGameflowLoginSession_t {
    uint64_t summonerId;
    uint64_t accountId;
    LolGameflowLoginSessionStates_t state;
    bool connected;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowLoginSession_t& v) {
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["connected"] = v.connected;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowLoginSession_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolGameflowLoginSessionStates_t>();
    v.connected = j.at("connected").get<bool>();
  }
  inline std::string to_string(const LolGameflowLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
