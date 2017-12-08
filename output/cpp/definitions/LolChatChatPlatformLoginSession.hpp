#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatPlatformLoginSessionState.hpp"
namespace leagueapi {
  struct LolChatChatPlatformLoginSession_t {
    uint64_t accountId;
    nlohmann::json gasToken;
    std::string puuid;
    std::string idToken;
    bool isNewPlayer;
    std::string userAuthToken;
    LolChatChatPlatformLoginSessionState_t state;
    std::string username;
    std::optional<uint64_t> summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["puuid"] = v.puuid;
    j["idToken"] = v.idToken;
    j["isNewPlayer"] = v.isNewPlayer;
    j["userAuthToken"] = v.userAuthToken;
    j["state"] = v.state;
    j["username"] = v.username;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.puuid = j.at("puuid").get<std::string>();
    v.idToken = j.at("idToken").get<std::string>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState_t>();
    v.username = j.at("username").get<std::string>();
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t>();
  }
  inline std::string to_string(const LolChatChatPlatformLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
