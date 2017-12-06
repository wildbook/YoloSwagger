#pragma once
#include <json.hpp>
#include <optional>
#include "ServiceStatusIncident_Severity.hpp"
namespace leagueapi {
  struct TickerMessage_t {
    ServiceStatusIncident_Severity_t severity;
    std::string heading;
    std::string updatedAt;
    std::string message;
    std::string createdAt;
  };

  inline void to_json(nlohmann::json& j, const TickerMessage_t& v) {
    j["severity"] = v.severity;
    j["heading"] = v.heading;
    j["updatedAt"] = v.updatedAt;
    j["message"] = v.message;
    j["createdAt"] = v.createdAt;
  }

  inline void from_json(const nlohmann::json& j, TickerMessage_t& v) {
    v.severity = j.at("severity").get<ServiceStatusIncident_Severity_t>();
    v.heading = j.at("heading").get<std::string>();
    v.updatedAt = j.at("updatedAt").get<std::string>();
    v.message = j.at("message").get<std::string>();
    v.createdAt = j.at("createdAt").get<std::string>();
  }
}
