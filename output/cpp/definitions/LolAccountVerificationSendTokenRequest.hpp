#ifndef SWAGGER_TYPES_LolAccountVerificationSendTokenRequest_HPP
#define SWAGGER_TYPES_LolAccountVerificationSendTokenRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAccountVerificationSendTokenRequest {
    // 
    std::string device;
    // 
    std::string locale;
    // 
    std::string mediator;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationSendTokenRequest& v) {
    j["device"] = v.device;
    j["locale"] = v.locale;
    j["mediator"] = v.mediator;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationSendTokenRequest& v) {
    v.device = j.at("device").get<std::string>;
    v.locale = j.at("locale").get<std::string>;
    v.mediator = j.at("mediator").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationSendTokenRequest_HPP
