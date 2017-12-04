#ifndef SWAGGER_TYPES_TickerMessage_HPP
#define SWAGGER_TYPES_TickerMessage_HPP
#include <json.hpp>
#include "ServiceStatusIncident_Severity.hpp"
namespace leagueapi {
  // 
  struct TickerMessage {
    // 
    std::string message;
    // 
    std::string updatedAt;
    // 
    std::string heading;
    // 
    std::string createdAt;
    // 
    ServiceStatusIncident_Severity severity;
  };

  inline void to_json(nlohmann::json& j, const TickerMessage& v) {
    j["message"] = v.message;
    j["updatedAt"] = v.updatedAt;
    j["heading"] = v.heading;
    j["createdAt"] = v.createdAt;
    j["severity"] = v.severity;
  }

  inline void from_json(const nlohmann::json& j, TickerMessage& v) {
    v.message = j.at("message").get<std::string>;
    v.updatedAt = j.at("updatedAt").get<std::string>;
    v.heading = j.at("heading").get<std::string>;
    v.createdAt = j.at("createdAt").get<std::string>;
    v.severity = j.at("severity").get<ServiceStatusIncident_Severity>;
  }

}
#endif // SWAGGER_TYPES_TickerMessage_HPP
