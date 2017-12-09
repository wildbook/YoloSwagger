#pragma once
#include <json.hpp>
#include <optional>
#include "LolLoginLoginError.hpp"
#include "LolLoginLoginQueue.hpp"
#include "LolLoginLoginSessionStates.hpp"
namespace leagueapi {
  struct LolLoginLoginSession_t {
    std::optional<uint64_t> summonerId;
    std::string username;
    std::optional<LolLoginLoginError_t> error;
    std::string puuid;
    bool isNewPlayer;
    LolLoginLoginSessionStates_t state;
    uint64_t accountId;
    std::string idToken;
    std::optional<LolLoginLoginQueue_t> queueStatus;
    std::string userAuthToken;
    bool connected;
    nlohmann::json gasToken;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSession_t& v) {
    if(v.summonerId)
      j["summonerId"] = *v.summonerId;
    j["username"] = v.username;
    if(v.error)
      j["error"] = *v.error;
    j["puuid"] = v.puuid;
    j["isNewPlayer"] = v.isNewPlayer;
    j["state"] = v.state;
    j["accountId"] = v.accountId;
    j["idToken"] = v.idToken;
    if(v.queueStatus)
      j["queueStatus"] = *v.queueStatus;
    j["userAuthToken"] = v.userAuthToken;
    j["connected"] = v.connected;
    j["gasToken"] = v.gasToken;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSession_t& v) {
    if(auto it = j.find("summonerId"); it != j.end() && !it->is_null())
      v.summonerId = it->get<uint64_t>();
    v.username = j.at("username").get<std::string>();
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<LolLoginLoginError_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.isNewPlayer = j.at("isNewPlayer").get<bool>();
    v.state = j.at("state").get<LolLoginLoginSessionStates_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.idToken = j.at("idToken").get<std::string>();
    if(auto it = j.find("queueStatus"); it != j.end() && !it->is_null())
      v.queueStatus = it->get<LolLoginLoginQueue_t>();
    v.userAuthToken = j.at("userAuthToken").get<std::string>();
    v.connected = j.at("connected").get<bool>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
  }
  inline std::string to_string(const LolLoginLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
