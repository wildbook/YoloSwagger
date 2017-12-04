#ifndef SWAGGER_TYPES_LolPersonalizedOffersAuthenticationRequest_HPP
#define SWAGGER_TYPES_LolPersonalizedOffersAuthenticationRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPersonalizedOffersAuthenticationRequest {
    // 
    std::string token;
    // 
    std::string tokenType;
  };

  void to_json(nlohmann::json& j, const LolPersonalizedOffersAuthenticationRequest& v) {
    j["token"] = v.token;
    j["tokenType"] = v.tokenType;
  }

  void from_json(const nlohmann::json& j, LolPersonalizedOffersAuthenticationRequest& v) {
    v.token = j.at("token").get<std::string>;
    v.tokenType = j.at("tokenType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPersonalizedOffersAuthenticationRequest_HPP
