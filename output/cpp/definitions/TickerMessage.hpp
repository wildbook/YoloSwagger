#pragma once
#include <json.hpp>
#include <optional>
#include "ServiceStatusIncident_Severity.hpp"
namespace leagueapi {
  struct TickerMessage_t {
    std::string createdAt;
    std::string heading;
    std::string message;
    ServiceStatusIncident_Severity_t severity;
    std::string updatedAt;
  };

  inline void to_json(nlohmann::json& j, const TickerMessage_t& v) {
    j["createdAt"] = v.createdAt;
    j["heading"] = v.heading;
    j["message"] = v.message;
    j["severity"] = v.severity;
    j["updatedAt"] = v.updatedAt;
  }

  inline void from_json(const nlohmann::json& j, TickerMessage_t& v) {
    v.createdAt = j.at("createdAt").get<std::string>();
    v.heading = j.at("heading").get<std::string>();
    v.message = j.at("message").get<std::string>();
    v.severity = j.at("severity").get<ServiceStatusIncident_Severity_t>();
    v.updatedAt = j.at("updatedAt").get<std::string>();
  }
}
