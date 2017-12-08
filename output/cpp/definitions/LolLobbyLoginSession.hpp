#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLobbyLoginSession_t {
    std::string username;
    uint64_t accountId;
    nlohmann::json gasToken;
    std::string puuid;
    std::string idToken;
    bool isNewPlayer;
    std::string userAuthToken;
    LolLobbyLoginSessionStates_t state;
    bool connected;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLoginSession_t& v) {
    j["username"] = v.username;
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["puuid"] = v.puuid;
    j["idToken"] = v.idToken;
    j["isNewPlayer"] = v.isNewPlayer;
    j["userAuthToken"] = v.userAuthToken;
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLoginSession_t& v) {
    v.username = j.at("username").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.puuid = j.at("puuid").get<std::string>();
    v.idToken = j.at("idToken").get<std::string>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.state = j.at("state").get<LolLobbyLoginSessionStates_t>();
    v.connected = j.at("connected").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
