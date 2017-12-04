#ifndef SWAGGER_TYPES_LolEmailVerificationValidationStatus_HPP
#define SWAGGER_TYPES_LolEmailVerificationValidationStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEmailVerificationValidationStatus {
    // 
    std::string emailStatus;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationValidationStatus& v) {
    j["emailStatus"] = v.emailStatus;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationValidationStatus& v) {
    v.emailStatus = j.at("emailStatus").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEmailVerificationValidationStatus_HPP
