#ifndef SWAGGER_TYPES_ShutdownNotification_HPP
#define SWAGGER_TYPES_ShutdownNotification_HPP
#include <json.hpp>
#include "ShutdownReason.hpp"
namespace leagueapi {
  // 
  struct ShutdownNotification {
    // 
    float countdown;
    // 
    std::string additionalInfo;
    // 
    ShutdownReason reason;
  };

  inline void to_json(nlohmann::json& j, const ShutdownNotification& v) {
    j["countdown"] = v.countdown;
    j["additionalInfo"] = v.additionalInfo;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, ShutdownNotification& v) {
    v.countdown = j.at("countdown").get<float>;
    v.additionalInfo = j.at("additionalInfo").get<std::string>;
    v.reason = j.at("reason").get<ShutdownReason>;
  }

}
#endif // SWAGGER_TYPES_ShutdownNotification_HPP
