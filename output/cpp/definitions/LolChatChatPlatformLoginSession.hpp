#ifndef SWAGGER_TYPES_LolChatChatPlatformLoginSession_HPP
#define SWAGGER_TYPES_LolChatChatPlatformLoginSession_HPP
#include <json.hpp>
#include "LolChatChatPlatformLoginSessionState.hpp"
namespace leagueapi {
  // 
  struct LolChatChatPlatformLoginSession {
    // 
    std::string username;
    // 
    std::string userAuthToken;
    // 
    std::string idToken;
    // 
    LolChatChatPlatformLoginSessionState state;
    // 
    std::string puuid;
    // 
    nlohmann::json gasToken;
    // 
    uint64_t summonerId;
    // 
    bool isNewPlayer;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSession& v) {
    j["username"] = v.username;
    j["userAuthToken"] = v.userAuthToken;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["puuid"] = v.puuid;
    j["gasToken"] = v.gasToken;
    j["summonerId"] = v.summonerId;
    j["isNewPlayer"] = v.isNewPlayer;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSession& v) {
    v.username = j.at("username").get<std::string>;
    v.userAuthToken = j.at("userAuthToken").get<std::string>;
    v.idToken = j.at("idToken").get<std::string>;
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState>;
    v.puuid = j.at("puuid").get<std::string>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.isNewPlayer = j.at("isNewPlayer").get<bool>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatPlatformLoginSession_HPP
