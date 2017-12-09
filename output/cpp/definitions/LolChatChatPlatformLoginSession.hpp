#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatPlatformLoginSessionState.hpp"
namespace leagueapi {
  struct LolChatChatPlatformLoginSession_t {
    bool isNewPlayer;
    uint64_t accountId;
    std::string username;
    std::optional<uint64_t> summonerId;
    std::string userAuthToken;
    std::string idToken;
    nlohmann::json gasToken;
    LolChatChatPlatformLoginSessionState_t state;
    std::string puuid;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSession_t& v) {
    j["isNewPlayer"] = v.isNewPlayer;
    j["accountId"] = v.accountId;
    j["username"] = v.username;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["userAuthToken"] = v.userAuthToken;
    j["idToken"] = v.idToken;
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["puuid"] = v.puuid;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSession_t& v) {
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.username = j.at("username").get<std::string>();
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.idToken = j.at("idToken").get<std::string>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState_t>();
    v.puuid = j.at("puuid").get<std::string>();
  }
  inline std::string to_string(const LolChatChatPlatformLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
