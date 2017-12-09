#pragma once
#include <json.hpp>
#include <optional>
#include "ServiceStatusIncident_Severity.hpp"
namespace leagueapi {
  struct TickerMessage_t {
    std::string message;
    ServiceStatusIncident_Severity_t severity;
    std::string heading;
    std::string updatedAt;
    std::string createdAt;
  };

  inline void to_json(nlohmann::json& j, const TickerMessage_t& v) {
    j["message"] = v.message;
    j["severity"] = v.severity;
    j["heading"] = v.heading;
    j["updatedAt"] = v.updatedAt;
    j["createdAt"] = v.createdAt;
  }

  inline void from_json(const nlohmann::json& j, TickerMessage_t& v) {
    v.message = j.at("message").get<std::string>();
    v.severity = j.at("severity").get<ServiceStatusIncident_Severity_t>();
    v.heading = j.at("heading").get<std::string>();
    v.updatedAt = j.at("updatedAt").get<std::string>();
    v.createdAt = j.at("createdAt").get<std::string>();
  }
  inline std::string to_string(const TickerMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
