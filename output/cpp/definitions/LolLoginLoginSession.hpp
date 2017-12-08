#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoginLoginQueue.hpp"
#include "LolLoginLoginSessionStates.hpp"
#include "LolLoginLoginError.hpp"
namespace leagueapi {
  struct LolLoginLoginSession_t {
    std::string userAuthToken;
    std::optional<LolLoginLoginQueue_t> queueStatus;
    nlohmann::json gasToken;
    std::string puuid;
    std::string idToken;
    LolLoginLoginSessionStates_t state;
    bool connected;
    std::optional<uint64_t> summonerId;
    uint64_t accountId;
    std::string username;
    bool isNewPlayer;
    std::optional<LolLoginLoginError_t> error;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSession_t& v) {
    j["userAuthToken"] = v.userAuthToken;
    if(v.queueStatus)
      j["queueStatus"] = *v.queueStatus;
    j["gasToken"] = v.gasToken;
    j["puuid"] = v.puuid;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["connected"] = v.connected;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["accountId"] = v.accountId;
    j["username"] = v.username;
    j["isNewPlayer"] = v.isNewPlayer;
    if(v.error)
      j["error"] = *v.error;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSession_t& v) {
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    if(auto it = j.find("queueStatus"); it != j.end() && !it->is_null())
      v.queueStatus = it->get<LolLoginLoginQueue_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.puuid = j.at("puuid").get<std::string>();
    v.idToken = j.at("idToken").get<std::string>();
    v.state = j.at("state").get<LolLoginLoginSessionStates_t>();
    v.connected = j.at("connected").get<bool>();
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.username = j.at("username").get<std::string>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<LolLoginLoginError_t>();
  }
  inline std::string to_string(const LolLoginLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
