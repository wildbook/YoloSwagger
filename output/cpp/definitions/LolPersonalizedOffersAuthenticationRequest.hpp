#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersAuthenticationRequest_t {
    std::string token;
    std::string tokenType;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersAuthenticationRequest_t& v) {
    j["token"] = v.token;
    j["tokenType"] = v.tokenType;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersAuthenticationRequest_t& v) {
    v.token = j.at("token").get<std::string>();
    v.tokenType = j.at("tokenType").get<std::string>();
  }
}
