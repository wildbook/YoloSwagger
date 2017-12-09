#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersAuthenticationResponse_t {
    std::string expiration;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersAuthenticationResponse_t& v) {
    j["expiration"] = v.expiration;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersAuthenticationResponse_t& v) {
    v.expiration = j.at("expiration").get<std::string>();
    v.token = j.at("token").get<std::string>();
  }
  inline std::string to_string(const LolPersonalizedOffersAuthenticationResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
