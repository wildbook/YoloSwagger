#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatPlatformLoginSessionState.hpp"
namespace leagueapi {
  struct LolChatChatPlatformLoginSession_t {
    LolChatChatPlatformLoginSessionState_t state;
    bool isNewPlayer;
    nlohmann::json gasToken;
    std::string puuid;
    std::string idToken;
    uint64_t accountId;
    std::string username;
    std::optional<uint64_t> summonerId;
    std::string userAuthToken;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSession_t& v) {
    j["state"] = v.state;
    j["isNewPlayer"] = v.isNewPlayer;
    j["gasToken"] = v.gasToken;
    j["puuid"] = v.puuid;
    j["idToken"] = v.idToken;
    j["accountId"] = v.accountId;
    j["username"] = v.username;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["userAuthToken"] = v.userAuthToken;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSession_t& v) {
    v.state = j.at("state").get<LolChatChatPlatformLoginSessionState_t>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.puuid = j.at("puuid").get<std::string>();
    v.idToken = j.at("idToken").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.username = j.at("username").get<std::string>();
    if(auto it = j.find("summonerId"); it != j.end() !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
  }
}
