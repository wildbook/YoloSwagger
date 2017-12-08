#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLobbyLoginSession_t {
    std::string_t username;
    std::string_t userAuthToken;
    std::string_t idToken;
    LolLobbyLoginSessionStates_t state;
    std::string_t puuid;
    nlohmann::json_t gasToken;
    bool_t connected;
    uint64_t_t summonerId;
    bool_t isNewPlayer;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLoginSession_t& v) {
    j["username"] = v.username;
    j["userAuthToken"] = v.userAuthToken;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["puuid"] = v.puuid;
    j["gasToken"] = v.gasToken;
    j["connected"] = v.connected;
    j["summonerId"] = v.summonerId;
    j["isNewPlayer"] = v.isNewPlayer;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLoginSession_t& v) {
    v.username = j.at("username").get<std::string_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string_t>();
    v.idToken = j.at("idToken").get<std::string_t>();
    v.state = j.at("state").get<LolLobbyLoginSessionStates_t>();
    v.puuid = j.at("puuid").get<std::string_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json_t>();
    v.connected = j.at("connected").get<bool_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLobbyLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
