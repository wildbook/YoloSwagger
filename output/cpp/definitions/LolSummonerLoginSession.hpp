#pragma once
#include <json.hpp>
#include <optional>
#include "LolSummonerLoginSessionStates.hpp"
namespace leagueapi {
  struct LolSummonerLoginSession_t {
    uint64_t accountId;
    bool connected;
    LolSummonerLoginSessionStates_t state;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.connected = j.at("connected").get<bool>();
    v.state = j.at("state").get<LolSummonerLoginSessionStates_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
