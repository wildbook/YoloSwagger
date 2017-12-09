#pragma once
#include <json.hpp>
#include <optional>
#include "RiotMessagingServiceState.hpp"
#include "RiotMessagingServiceTokenType.hpp"
namespace leagueapi {
  struct RiotMessagingServiceSession_t {
    RiotMessagingServiceTokenType_t tokenType;
    RiotMessagingServiceState_t state;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceSession_t& v) {
    j["tokenType"] = v.tokenType;
    j["state"] = v.state;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceSession_t& v) {
    v.tokenType = j.at("tokenType").get<RiotMessagingServiceTokenType_t>();
    v.state = j.at("state").get<RiotMessagingServiceState_t>();
    v.token = j.at("token").get<std::string>();
  }
  inline std::string to_string(const RiotMessagingServiceSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
