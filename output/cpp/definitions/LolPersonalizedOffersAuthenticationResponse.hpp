#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersAuthenticationResponse_t {
    std::string token;
    std::string expiration;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersAuthenticationResponse_t& v) {
    j["token"] = v.token;
    j["expiration"] = v.expiration;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersAuthenticationResponse_t& v) {
    v.token = j.at("token").get<std::string>();
    v.expiration = j.at("expiration").get<std::string>();
  }
  inline std::string to_string(const LolPersonalizedOffersAuthenticationResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
