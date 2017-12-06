#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersAuthenticationRequest_t {
    std::string tokenType;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersAuthenticationRequest_t& v) {
    j["tokenType"] = v.tokenType;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersAuthenticationRequest_t& v) {
    v.tokenType = j.at("tokenType").get<std::string>();
    v.token = j.at("token").get<std::string>();
  }
}
