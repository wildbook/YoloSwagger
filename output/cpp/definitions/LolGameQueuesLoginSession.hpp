#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesLoginSessionStates.hpp"
namespace leagueapi {
  struct LolGameQueuesLoginSession_t {
    bool connected;
    LolGameQueuesLoginSessionStates_t state;
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesLoginSession_t& v) {
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesLoginSession_t& v) {
    v.connected = j.at("connected").get<bool>();
    v.state = j.at("state").get<LolGameQueuesLoginSessionStates_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolGameQueuesLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
