#ifndef SWAGGER_TYPES_TickerMessage_HPP
#define SWAGGER_TYPES_TickerMessage_HPP
#include <json.hpp>
#include "ServiceStatusIncident_Severity.hpp"
namespace leagueapi {
  // 
  struct TickerMessage {
    // 
    std::string createdAt;
    // 
    std::string heading;
    // 
    std::string message;
    // 
    ServiceStatusIncident_Severity severity;
    // 
    std::string updatedAt;
  };

  inline void to_json(nlohmann::json& j, const TickerMessage& v) {
    j["createdAt"] = v.createdAt;
    j["heading"] = v.heading;
    j["message"] = v.message;
    j["severity"] = v.severity;
    j["updatedAt"] = v.updatedAt;
  }

  inline void from_json(const nlohmann::json& j, TickerMessage& v) {
    v.createdAt = j.at("createdAt").get<std::string>;
    v.heading = j.at("heading").get<std::string>;
    v.message = j.at("message").get<std::string>;
    v.severity = j.at("severity").get<ServiceStatusIncident_Severity>;
    v.updatedAt = j.at("updatedAt").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_TickerMessage_HPP
