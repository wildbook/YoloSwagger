#ifndef SWAGGER_TYPES_LolPersonalizedOffersAuthenticationResponse_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersAuthenticationResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPersonalizedOffersAuthenticationResponse {
    // 
    std::string token;
    // 
    std::string expiration;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersAuthenticationResponse& v) {
    j["token"] = v.token;
    j["expiration"] = v.expiration;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersAuthenticationResponse& v) {
    v.token = j.at("token").get<std::string>;
    v.expiration = j.at("expiration").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersAuthenticationResponse_HPP
