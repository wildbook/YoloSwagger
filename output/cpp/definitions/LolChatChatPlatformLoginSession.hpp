#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatPlatformLoginSessionState.hpp"
namespace leagueapi {
  struct LolChatChatPlatformLoginSession_t {
    uint64_t accountId;
    std::string username;
    std::optional<uint64_t> summonerId;
    std::string puuid;
    bool isNewPlayer;
    std::string idToken;
    LolChatChatPlatformLoginSessionState_t state;
    std::string userAuthToken;
    nlohmann::json gasToken;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["username"] = v.username;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["puuid"] = v.puuid;
    j["isNewPlayer"] = v.isNewPlayer;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["userAuthToken"] = v.userAuthToken;
    j["gasToken"] = v.gasToken;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.username = j.at("username").get<std::string>();
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.idToken = j.at("idToken").get<std::string>();
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
  }
  inline std::string to_string(const LolChatChatPlatformLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
