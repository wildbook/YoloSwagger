#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationVerifyRequest_t {
    std::string mediator;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationVerifyRequest_t& v) {
    j["mediator"] = v.mediator;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationVerifyRequest_t& v) {
    v.mediator = j.at("mediator").get<std::string>();
    v.token = j.at("token").get<std::string>();
  }
}
