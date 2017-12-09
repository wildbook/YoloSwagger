#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoginLoginError.hpp"
#include "LolLoginLoginQueue.hpp"
#include "LolLoginLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLoginLoginSession_t {
    bool isNewPlayer;
    std::string username;
    std::optional<uint64_t> summonerId;
    std::optional<LolLoginLoginError_t> error;
    std::string idToken;
    nlohmann::json gasToken;
    uint64_t accountId;
    std::string userAuthToken;
    std::string puuid;
    bool connected;
    LolLoginLoginSessionStates_t state;
    std::optional<LolLoginLoginQueue_t> queueStatus;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSession_t& v) {
    j["isNewPlayer"] = v.isNewPlayer;
    j["username"] = v.username;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    if(v.error)
      j["error"] = *v.error;
    j["idToken"] = v.idToken;
    j["gasToken"] = v.gasToken;
    j["accountId"] = v.accountId;
    j["userAuthToken"] = v.userAuthToken;
    j["puuid"] = v.puuid;
    j["connected"] = v.connected;
    j["state"] = v.state;
    if(v.queueStatus)
      j["queueStatus"] = *v.queueStatus;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSession_t& v) {
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.username = j.at("username").get<std::string>();
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t>();
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<LolLoginLoginError_t>();
    v.idToken = j.at("idToken").get<std::string>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.connected = j.at("connected").get<bool>();
    v.state = j.at("state").get<LolLoginLoginSessionStates_t>();
    if(auto it = j.find("queueStatus"); it != j.end() && !it->is_null())
      v.queueStatus = it->get<LolLoginLoginQueue_t>();
  }
  inline std::string to_string(const LolLoginLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
