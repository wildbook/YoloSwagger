#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLeaguesLoginSession_t {
    LolLeaguesLoginSessionStates_t state;
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLoginSession_t& v) {
    j["state"] = v.state;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLoginSession_t& v) {
    v.state = j.at("state").get<LolLeaguesLoginSessionStates_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLeaguesLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
