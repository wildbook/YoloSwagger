#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoginLoginError.hpp"
#include "LolLoginLoginQueue.hpp"
#include "LolLoginLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLoginLoginSession_t {
    uint64_t accountId;
    bool connected;
    std::optional<LolLoginLoginError_t> error;
    nlohmann::json gasToken;
    std::string idToken;
    bool isNewPlayer;
    std::string puuid;
    std::optional<LolLoginLoginQueue_t> queueStatus;
    LolLoginLoginSessionStates_t state;
    std::optional<uint64_t> summonerId;
    std::string userAuthToken;
    std::string username;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSession_t& v) {
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    if(v.error)
      j["error"] = *v.error;
    j["gasToken"] = v.gasToken;
    j["idToken"] = v.idToken;
    j["isNewPlayer"] = v.isNewPlayer;
    j["puuid"] = v.puuid;
    if(v.queueStatus)
      j["queueStatus"] = *v.queueStatus;
    j["state"] = v.state;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["userAuthToken"] = v.userAuthToken;
    j["username"] = v.username;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSession_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.connected = j.at("connected").get<bool>();
    if(auto it = j.find("error"); it != j.end() !it->is_null())
      v.error = it->get<LolLoginLoginError_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.idToken = j.at("idToken").get<std::string>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.puuid = j.at("puuid").get<std::string>();
    if(auto it = j.find("queueStatus"); it != j.end() !it->is_null())
      v.queueStatus = it->get<LolLoginLoginQueue_t>();
    v.state = j.at("state").get<LolLoginLoginSessionStates_t>();
    if(auto it = j.find("summonerId"); it != j.end() !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.username = j.at("username").get<std::string>();
  }
}
