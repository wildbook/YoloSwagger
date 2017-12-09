#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatPlatformLoginSessionState.hpp"
namespace leagueapi {
  struct LolChatChatPlatformLoginSession_t {
    nlohmann::json gasToken;
    std::string puuid;
    uint64_t accountId;
    std::string username;
    std::string userAuthToken;
    std::optional<uint64_t> summonerId;
    bool isNewPlayer;
    LolChatChatPlatformLoginSessionState_t state;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSession_t& v) {
    j["gasToken"] = v.gasToken;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["username"] = v.username;
    j["userAuthToken"] = v.userAuthToken;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["isNewPlayer"] = v.isNewPlayer;
    j["state"] = v.state;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSession_t& v) {
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.username = j.at("username").get<std::string>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState_t>();
    v.idToken = j.at("idToken").get<std::string>();
  }
  inline std::string to_string(const LolChatChatPlatformLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
