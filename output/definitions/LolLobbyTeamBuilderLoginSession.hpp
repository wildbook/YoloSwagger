#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLoginSession_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLoginSession_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderLoginSessionState.hpp"
namespace test {
  // 
  struct LolLobbyTeamBuilderLoginSession {
'    // 
    uint64_t accountId;
    // 
    bool connected;
    // 
    LolLobbyTeamBuilderLoginSessionState state;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLoginSession& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.connected = j.at("connected").get<bool>;
    v.state = j.at("state").get<LolLobbyTeamBuilderLoginSessionState>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLoginSession_HPP
