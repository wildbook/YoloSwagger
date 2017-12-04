#ifndef SWAGGER_TYPES_LolLoginLoginSession_HPP
#define SWAGGER_TYPES_LolLoginLoginSession_HPP
#include <json.hpp>
#include "LolLoginLoginError.hpp"
#include "LolLoginLoginSessionStates.hpp"
#include "LolLoginLoginQueue.hpp"
namespace leagueapi {
  // 
  struct LolLoginLoginSession {
    // 
    uint64_t accountId;
    // 
    bool connected;
    // 
    LolLoginLoginError error;
    // 
    nlohmann::json gasToken;
    // 
    std::string idToken;
    // 
    bool isNewPlayer;
    // 
    std::string puuid;
    // 
    LolLoginLoginQueue queueStatus;
    // 
    LolLoginLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    std::string userAuthToken;
    // 
    std::string username;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSession& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["error"] = v.error;
    j["gasToken"] = v.gasToken;
    j["idToken"] = v.idToken;
    j["isNewPlayer"] = v.isNewPlayer;
    j["puuid"] = v.puuid;
    j["queueStatus"] = v.queueStatus;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["userAuthToken"] = v.userAuthToken;
    j["username"] = v.username;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.connected = j.at("connected").get<bool>;
    v.error = j.at("error").get<LolLoginLoginError>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.idToken = j.at("idToken").get<std::string>;
    v.isNewPlayer = j.at("isNewPlayer").get<bool>;
    v.puuid = j.at("puuid").get<std::string>;
    v.queueStatus = j.at("queueStatus").get<LolLoginLoginQueue>;
    v.state = j.at("state").get<LolLoginLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.userAuthToken = j.at("userAuthToken").get<std::string>;
    v.username = j.at("username").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoginLoginSession_HPP
