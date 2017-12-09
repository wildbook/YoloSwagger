#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLobbyLoginSession_t {
    std::string puuid;
    nlohmann::json gasToken;
    bool isNewPlayer;
    uint64_t accountId;
    std::string username;
    std::string userAuthToken;
    uint64_t summonerId;
    bool connected;
    LolLobbyLoginSessionStates_t state;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLoginSession_t& v) {
    j["puuid"] = v.puuid;
    j["gasToken"] = v.gasToken;
    j["isNewPlayer"] = v.isNewPlayer;
    j["accountId"] = v.accountId;
    j["username"] = v.username;
    j["userAuthToken"] = v.userAuthToken;
    j["summonerId"] = v.summonerId;
    j["connected"] = v.connected;
    j["state"] = v.state;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLoginSession_t& v) {
    v.puuid = j.at("puuid").get<std::string>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.username = j.at("username").get<std::string>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.connected = j.at("connected").get<bool>();
    v.state = j.at("state").get<LolLobbyLoginSessionStates_t>();
    v.idToken = j.at("idToken").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
