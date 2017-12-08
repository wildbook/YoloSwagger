#pragma once
#include <json.hpp>
#include <optional>
#include "ServiceStatusIncident_Severity.hpp"
namespace leagueapi {
  struct TickerMessage_t {
    std::string_t message;
    std::string_t updatedAt;
    std::string_t heading;
    std::string_t createdAt;
    ServiceStatusIncident_Severity_t severity;
  };

  inline void to_json(nlohmann::json& j, const TickerMessage_t& v) {
    j["message"] = v.message;
    j["updatedAt"] = v.updatedAt;
    j["heading"] = v.heading;
    j["createdAt"] = v.createdAt;
    j["severity"] = v.severity;
  }

  inline void from_json(const nlohmann::json& j, TickerMessage_t& v) {
    v.message = j.at("message").get<std::string_t>();
    v.updatedAt = j.at("updatedAt").get<std::string_t>();
    v.heading = j.at("heading").get<std::string_t>();
    v.createdAt = j.at("createdAt").get<std::string_t>();
    v.severity = j.at("severity").get<ServiceStatusIncident_Severity_t>();
  }
  inline std::string to_string(const TickerMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
