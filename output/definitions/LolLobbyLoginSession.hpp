#ifndef SWAGGER_TYPES_LolLobbyLoginSession_HPP
#define SWAGGER_TYPES_LolLobbyLoginSession_HPP
#include <json.hpp>
#include "LolLobbyLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLoginSession {
    // 
    uint64_t accountId;
    // 
    bool connected;
    // 
    nlohmann::json gasToken;
    // 
    std::string idToken;
    // 
    bool isNewPlayer;
    // 
    std::string puuid;
    // 
    LolLobbyLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    std::string userAuthToken;
    // 
    std::string username;
  };

  void to_json(nlohmann::json& j, const LolLobbyLoginSession& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["gasToken"] = v.gasToken;
    j["idToken"] = v.idToken;
    j["isNewPlayer"] = v.isNewPlayer;
    j["puuid"] = v.puuid;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["userAuthToken"] = v.userAuthToken;
    j["username"] = v.username;
  }

  void from_json(const nlohmann::json& j, LolLobbyLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.connected = j.at("connected").get<bool>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.idToken = j.at("idToken").get<std::string>;
    v.isNewPlayer = j.at("isNewPlayer").get<bool>;
    v.puuid = j.at("puuid").get<std::string>;
    v.state = j.at("state").get<LolLobbyLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.userAuthToken = j.at("userAuthToken").get<std::string>;
    v.username = j.at("username").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLoginSession_HPP