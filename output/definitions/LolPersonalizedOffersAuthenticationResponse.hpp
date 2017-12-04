#ifndef SWAGGER_TYPES_LolPersonalizedOffersAuthenticationResponse_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersAuthenticationResponse_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolPersonalizedOffersAuthenticationResponse {
'    // 
    std::string expiration;
    // 
    std::string token;
  };

  void to_json(nlohmann::json& j, const LolPersonalizedOffersAuthenticationResponse& v) {
    j["expiration"] = v.expiration;
    j["token"] = v.token;
  }

  void from_json(const nlohmann::json& j, LolPersonalizedOffersAuthenticationResponse& v) {
    v.expiration = j.at("expiration").get<std::string>;
    v.token = j.at("token").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersAuthenticationResponse_HPP
