#ifndef SWAGGER_TYPES_RiotMessagingServiceSession_HPP
#define SWAGGER_TYPES_RiotMessagingServiceSession_HPP
#include <json.hpp>
#include "RiotMessagingServiceState.hpp"
#include "RiotMessagingServiceTokenType.hpp"
namespace leagueapi {
  // 
  struct RiotMessagingServiceSession {
    // 
    RiotMessagingServiceState state;
    // 
    std::string token;
    // 
    RiotMessagingServiceTokenType tokenType;
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceSession& v) {
    j["state"] = v.state;
    j["token"] = v.token;
    j["tokenType"] = v.tokenType;
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceSession& v) {
    v.state = j.at("state").get<RiotMessagingServiceState>;
    v.token = j.at("token").get<std::string>;
    v.tokenType = j.at("tokenType").get<RiotMessagingServiceTokenType>;
  }

}
#endif // SWAGGER_TYPES_RiotMessagingServiceSession_HPP
