#ifndef SWAGGER_TYPES_LolAccountVerificationVerifyRequest_HPP
#define SWAGGER_TYPES_LolAccountVerificationVerifyRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAccountVerificationVerifyRequest {
    // 
    std::string mediator;
    // 
    std::string token;
  };

  void to_json(nlohmann::json& j, const LolAccountVerificationVerifyRequest& v) {
    j["mediator"] = v.mediator;
    j["token"] = v.token;
  }

  void from_json(const nlohmann::json& j, LolAccountVerificationVerifyRequest& v) {
    v.mediator = j.at("mediator").get<std::string>;
    v.token = j.at("token").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationVerifyRequest_HPP
