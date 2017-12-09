#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLobbyLoginSession_t {
    uint64_t accountId;
    std::string username;
    uint64_t summonerId;
    std::string puuid;
    bool isNewPlayer;
    std::string idToken;
    LolLobbyLoginSessionStates_t state;
    std::string userAuthToken;
    bool connected;
    nlohmann::json gasToken;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["username"] = v.username;
    j["summonerId"] = v.summonerId;
    j["puuid"] = v.puuid;
    j["isNewPlayer"] = v.isNewPlayer;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["userAuthToken"] = v.userAuthToken;
    j["connected"] = v.connected;
    j["gasToken"] = v.gasToken;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.username = j.at("username").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.idToken = j.at("idToken").get<std::string>();
    v.state = j.at("state").get<LolLobbyLoginSessionStates_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.connected = j.at("connected").get<bool>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
  }
  inline std::string to_string(const LolLobbyLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
