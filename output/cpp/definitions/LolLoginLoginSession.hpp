#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoginLoginSessionStates.hpp"
#include "LolLoginLoginError.hpp"
#include "LolLoginLoginQueue.hpp"
namespace leagueapi {
  struct LolLoginLoginSession_t {
    bool isNewPlayer;
    std::string userAuthToken;
    std::optional<uint64_t> summonerId;
    bool connected;
    std::optional<LolLoginLoginQueue_t> queueStatus;
    std::string idToken;
    std::optional<LolLoginLoginError_t> error;
    nlohmann::json gasToken;
    std::string puuid;
    uint64_t accountId;
    std::string username;
    LolLoginLoginSessionStates_t state;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSession_t& v) {
    j["isNewPlayer"] = v.isNewPlayer;
    j["userAuthToken"] = v.userAuthToken;
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["connected"] = v.connected;
    if(v.queueStatus)
      j["queueStatus"] = *v.queueStatus;
    j["idToken"] = v.idToken;
    if(v.error)
      j["error"] = *v.error;
    j["gasToken"] = v.gasToken;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["username"] = v.username;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSession_t& v) {
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.connected = j.at("connected").get<bool>();
    if(auto it = j.find("queueStatus"); it != j.end() && !it->is_null())
      v.queueStatus = it->get<LolLoginLoginQueue_t>();
    v.idToken = j.at("idToken").get<std::string>();
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<LolLoginLoginError_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.username = j.at("username").get<std::string>();
    v.state = j.at("state").get<LolLoginLoginSessionStates_t>();
  }
  inline std::string to_string(const LolLoginLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
