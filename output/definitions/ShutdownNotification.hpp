#ifndef SWAGGER_TYPES_ShutdownNotification_HPP
#define SWAGGER_TYPES_ShutdownNotification_HPP
#include <json.hpp>
#include "ShutdownReason.hpp"
namespace leagueapi {
  // 
  struct ShutdownNotification {
    // 
    std::string additionalInfo;
    // 
    float countdown;
    // 
    ShutdownReason reason;
  };

  inline void to_json(nlohmann::json& j, const ShutdownNotification& v) {
    j["additionalInfo"] = v.additionalInfo;
    j["countdown"] = v.countdown;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, ShutdownNotification& v) {
    v.additionalInfo = j.at("additionalInfo").get<std::string>;
    v.countdown = j.at("countdown").get<float>;
    v.reason = j.at("reason").get<ShutdownReason>;
  }

}
#endif // SWAGGER_TYPES_ShutdownNotification_HPP
