#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesLoginSessionStates.hpp"
namespace leagueapi {
  struct LolGameQueuesLoginSession_t {
    LolGameQueuesLoginSessionStates_t state;
    bool_t connected;
    uint64_t_t summonerId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesLoginSession_t& v) {
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesLoginSession_t& v) {
    v.state = j.at("state").get<LolGameQueuesLoginSessionStates_t>();
    v.connected = j.at("connected").get<bool_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolGameQueuesLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
