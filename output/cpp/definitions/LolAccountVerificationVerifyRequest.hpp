#ifndef SWAGGER_TYPES_LolAccountVerificationVerifyRequest_HPP
#define SWAGGER_TYPES_LolAccountVerificationVerifyRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAccountVerificationVerifyRequest {
    // 
    std::string token;
    // 
    std::string mediator;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationVerifyRequest& v) {
    j["token"] = v.token;
    j["mediator"] = v.mediator;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationVerifyRequest& v) {
    v.token = j.at("token").get<std::string>;
    v.mediator = j.at("mediator").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationVerifyRequest_HPP
