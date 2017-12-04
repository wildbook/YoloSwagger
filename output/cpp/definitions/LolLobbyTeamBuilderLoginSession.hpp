#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLoginSession_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLoginSession_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderLoginSessionState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderLoginSession {
    // 
    LolLobbyTeamBuilderLoginSessionState state;
    // 
    bool connected;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLoginSession& v) {
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLoginSession& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderLoginSessionState>;
    v.connected = j.at("connected").get<bool>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLoginSession_HPP
