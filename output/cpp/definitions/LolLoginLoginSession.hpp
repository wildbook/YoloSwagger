#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoginLoginError.hpp"
#include "LolLoginLoginQueue.hpp"
#include "LolLoginLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLoginLoginSession_t {
    std::string username;
    std::string userAuthToken;
    std::string idToken;
    LolLoginLoginSessionStates_t state;
    bool connected;
    nlohmann::json gasToken;
    std::optional<LolLoginLoginError_t> error;
    std::optional<LolLoginLoginQueue_t> queueStatus;
    std::string puuid;
    std::optional<uint64_t> summonerId;
    bool isNewPlayer;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSession_t& v) {
    j["username"] = v.username;
    j["userAuthToken"] = v.userAuthToken;
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["connected"] = v.connected;
    j["gasToken"] = v.gasToken;
    if(v.error)
      j["error"] = *v.error;
    if(v.queueStatus)
      j["queueStatus"] = *v.queueStatus;
    j["puuid"] = v.puuid;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["isNewPlayer"] = v.isNewPlayer;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSession_t& v) {
    v.username = j.at("username").get<std::string>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.idToken = j.at("idToken").get<std::string>();
    v.state = j.at("state").get<LolLoginLoginSessionStates_t>();
    v.connected = j.at("connected").get<bool>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<LolLoginLoginError_t>();
    if(auto it = j.find("queueStatus"); it != j.end() && !it->is_null())
      v.queueStatus = it->get<LolLoginLoginQueue_t>();
    v.puuid = j.at("puuid").get<std::string>();
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolLoginLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
