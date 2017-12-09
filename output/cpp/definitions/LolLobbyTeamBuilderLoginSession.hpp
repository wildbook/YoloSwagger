#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderLoginSessionState.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderLoginSession_t {
    uint64_t accountId;
    LolLobbyTeamBuilderLoginSessionState_t state;
    bool connected;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.state = j.at("state").get<LolLobbyTeamBuilderLoginSessionState_t>();
    v.connected = j.at("connected").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
