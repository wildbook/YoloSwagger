#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderLoginSessionStates.hpp"
namespace leagueapi {
  struct RecofrienderLoginSession_t {
    uint64_t summonerId;
    uint64_t accountId;
    nlohmann::json gasToken;
    RecofrienderLoginSessionStates_t state;
    std::string idToken;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLoginSession_t& v) {
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["gasToken"] = v.gasToken;
    j["state"] = v.state;
    j["idToken"] = v.idToken;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLoginSession_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.gasToken = j.at("gasToken").get<nlohmann::json>();
    v.state = j.at("state").get<RecofrienderLoginSessionStates_t>();
    v.idToken = j.at("idToken").get<std::string>();
  }
  inline std::string to_string(const RecofrienderLoginSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
