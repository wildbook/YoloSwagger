#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorPlayerBehavior_LoginSessionState.hpp"
#include "LolPlayerBehaviorPlayerBehavior_LoginError.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorPlayerBehavior_LoginSession_t {
    LolPlayerBehaviorPlayerBehavior_LoginSessionState_t state;
    std::optional<LolPlayerBehaviorPlayerBehavior_LoginError_t> error;
    uint64_t summonerId;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_LoginSession_t& v) {
    j["state"] = v.state;
    if(v.error)
      j["error"] = *v.error;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_LoginSession_t& v) {
    v.state = j.at("state").get<LolPlayerBehaviorPlayerBehavior_LoginSessionState_t>();
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<LolPlayerBehaviorPlayerBehavior_LoginError_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorPlayerBehavior_LoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
