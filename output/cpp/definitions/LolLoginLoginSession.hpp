#ifndef SWAGGER_TYPES_LolLoginLoginSession_HPP
#define SWAGGER_TYPES_LolLoginLoginSession_HPP
#include <json.hpp>
#include "LolLoginLoginError.hpp"
#include "LolLoginLoginQueue.hpp"
#include "LolLoginLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct LolLoginLoginSession {
    // 
    std::string username;
    // 
    std::string userAuthToken;
    // 
    std::string idToken;
    // 
    LolLoginLoginSessionStates state;
    // 
    bool connected;
    // 
    nlohmann::json gasToken;
    // 
    LolLoginLoginError error;
    // 
    LolLoginLoginQueue queueStatus;
    // 
    std::string puuid;
    // 
    uint64_t summonerId;
    // 
    bool isNewPlayer;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSession& v) {
    j["username"] = v.username;
    j["userAuthToken"] = v.userAuthToken;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["gasToken"] = v.gasToken;
    j["error"] = v.error;
    j["queueStatus"] = v.queueStatus;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["isNewPlayer"] = v.isNewPlayer;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSession& v) {
    v.username = j.at("username").get<std::string>;
    v.userAuthToken = j.at("userAuthToken").get<std::string>;
    v.idToken = j.at("idToken").get<std::string>;
    v.state = j.at("state").get<LolLoginLoginSessionStates>;
    v.connected = j.at("connected").get<bool>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.error = j.at("error").get<LolLoginLoginError>;
    v.queueStatus = j.at("queueStatus").get<LolLoginLoginQueue>;
    v.puuid = j.at("puuid").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.isNewPlayer = j.at("isNewPlayer").get<bool>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLoginLoginSession_HPP
