#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorPlayerBehavior_LoginError.hpp"
#include "LolPlayerBehaviorPlayerBehavior_LoginSessionState.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorPlayerBehavior_LoginSession_t {
    uint64_t accountId;
    std::optional<LolPlayerBehaviorPlayerBehavior_LoginError_t> error;
    LolPlayerBehaviorPlayerBehavior_LoginSessionState_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_LoginSession_t& v) {
    j["accountId"] = v.accountId;
    if(v.error)
      j["error"] = *v.error;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_LoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    if(auto it = j.find("error"); it != j.end() !it->is_null())
      v.error = it->get<LolPlayerBehaviorPlayerBehavior_LoginError_t>();
    v.state = j.at("state").get<LolPlayerBehaviorPlayerBehavior_LoginSessionState_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
