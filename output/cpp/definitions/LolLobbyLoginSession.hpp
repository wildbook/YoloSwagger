#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLobbyLoginSession_t {
    LolLobbyLoginSessionStates_t state;
    bool isNewPlayer;
    nlohmann::json gasToken;
    std::string puuid;
    std::string idToken;
    bool connected;
    uint64_t accountId;
    std::string username;
    uint64_t summonerId;
    std::string userAuthToken;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLoginSession_t& v) {
    j["state"] = v.state;
    j["isNewPlayer"] = v.isNewPlayer;
    j["gasToken"] = v.gasToken;
    j["puuid"] = v.puuid;
    j["idToken"] = v.idToken;
    j["connected"] = v.connected;
    j["accountId"] = v.accountId;
    j["username"] = v.username;
    j["summonerId"] = v.summonerId;
    j["userAuthToken"] = v.userAuthToken;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLoginSession_t& v) {
    v.state = j.at("state").get<LolLobbyLoginSessionStates_t>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.puuid = j.at("puuid").get<std::string>();
    v.idToken = j.at("idToken").get<std::string>();
    v.connected = j.at("connected").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.username = j.at("username").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
  }
}
