#pragma once
#include <json.hpp>
#include <optional>
#include "LolAccountVerificationLoginSessionState.hpp"
namespace leagueapi {
  struct LolAccountVerificationLoginSession_t {
    LolAccountVerificationLoginSessionState_t state;
    uint64_t summonerId;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationLoginSession_t& v) {
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationLoginSession_t& v) {
    v.state = j.at("state").get<LolAccountVerificationLoginSessionState_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolAccountVerificationLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
