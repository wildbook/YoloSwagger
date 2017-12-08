#pragma once
#include <json.hpp>
#include <optional>
#include "RiotMessagingServiceState.hpp"
#include "RiotMessagingServiceTokenType.hpp"
namespace leagueapi {
  struct RiotMessagingServiceSession_t {
    RiotMessagingServiceState_t state;
    std::string_t token;
    RiotMessagingServiceTokenType_t tokenType;
  };

  inline void to_json(nlohmann::json& j, const RiotMessagingServiceSession_t& v) {
    j["state"] = v.state;
    j["token"] = v.token;
    j["tokenType"] = v.tokenType;
  }

  inline void from_json(const nlohmann::json& j, RiotMessagingServiceSession_t& v) {
    v.state = j.at("state").get<RiotMessagingServiceState_t>();
    v.token = j.at("token").get<std::string_t>();
    v.tokenType = j.at("tokenType").get<RiotMessagingServiceTokenType_t>();
  }
  inline std::string to_string(const RiotMessagingServiceSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
