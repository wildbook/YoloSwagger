#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoginLoginSessionStates.hpp"
#include "LolLoginLoginQueue.hpp"
#include "LolLoginLoginError.hpp"
namespace leagueapi {
  struct LolLoginLoginSession_t {
    nlohmann::json gasToken;
    LolLoginLoginSessionStates_t state;
    std::optional<LolLoginLoginQueue_t> queueStatus;
    std::string puuid;
    uint64_t accountId;
    bool connected;
    bool isNewPlayer;
    std::string idToken;
    std::optional<LolLoginLoginError_t> error;
    std::string username;
    std::optional<uint64_t> summonerId;
    std::string userAuthToken;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSession_t& v) {
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    if(v.queueStatus)
      j["queueStatus"] = *v.queueStatus;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["connected"] = v.connected;
    j["isNewPlayer"] = v.isNewPlayer;
    j["idToken"] = v.idToken;
    if(v.error)
      j["error"] = *v.error;
    j["username"] = v.username;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["userAuthToken"] = v.userAuthToken;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSession_t& v) {
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<LolLoginLoginSessionStates_t>();
    if(auto it = j.find("queueStatus"); it != j.end() !it->is_null())
      v.queueStatus = it->get<LolLoginLoginQueue_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.connected = j.at("connected").get<bool>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.idToken = j.at("idToken").get<std::string>();
    if(auto it = j.find("error"); it != j.end() !it->is_null())
      v.error = it->get<LolLoginLoginError_t>();
    v.username = j.at("username").get<std::string>();
    if(auto it = j.find("summonerId"); it != j.end() !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
  }
}
