#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowLoginSessionStates.hpp"
namespace leagueapi {
  struct LolGameflowLoginSession_t {
    uint64_t accountId;
    LolGameflowLoginSessionStates_t state;
    bool connected;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolGameflowLoginSessionStates_t>();
    v.connected = j.at("connected").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolGameflowLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
