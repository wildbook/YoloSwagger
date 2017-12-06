#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatPlatformLoginSessionState.hpp"
namespace leagueapi {
  struct LolChatChatPlatformLoginSession_t {
    uint64_t accountId;
    nlohmann::json gasToken;
    std::string idToken;
    bool isNewPlayer;
    std::string puuid;
    LolChatChatPlatformLoginSessionState_t state;
    std::optional<uint64_t> summonerId;
    std::string userAuthToken;
    std::string username;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["idToken"] = v.idToken;
    j["isNewPlayer"] = v.isNewPlayer;
    j["puuid"] = v.puuid;
    j["state"] = v.state;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["userAuthToken"] = v.userAuthToken;
    j["username"] = v.username;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.idToken = j.at("idToken").get<std::string>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.puuid = j.at("puuid").get<std::string>();
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState_t>();
    if(auto it = j.find("summonerId"); it != j.end() !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.username = j.at("username").get<std::string>();
  }
}
