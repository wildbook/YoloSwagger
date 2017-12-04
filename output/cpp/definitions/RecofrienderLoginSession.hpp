#ifndef SWAGGER_TYPES_RecofrienderLoginSession_HPP
#define SWAGGER_TYPES_RecofrienderLoginSession_HPP
#include <json.hpp>
#include "RecofrienderLoginSessionStates.hpp"
namespace leagueapi {
  // 
  struct RecofrienderLoginSession {
    // 
    std::string idToken;
    // 
    RecofrienderLoginSessionStates state;
    // 
    uint64_t summonerId;
    // 
    nlohmann::json gasToken;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLoginSession& v) {
    j["idToken"] = v.idToken;
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["gasToken"] = v.gasToken;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLoginSession& v) {
    v.idToken = j.at("idToken").get<std::string>;
    v.state = j.at("state").get<RecofrienderLoginSessionStates>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderLoginSession_HPP
