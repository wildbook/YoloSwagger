#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ServiceStatusIncident_Severity_t {
    info_E = 0,
    warn_E = 1,
    error_E = 2,
  };

  inline void to_json(nlohmann::json& j, const ServiceStatusIncident_Severity_t& v) {
    switch(v) {
      case ServiceStatusIncident_Severity_t::info_E:
        j = "info";
      break;
      case ServiceStatusIncident_Severity_t::warn_E:
        j = "warn";
      break;
      case ServiceStatusIncident_Severity_t::error_E:
        j = "error";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ServiceStatusIncident_Severity_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "info"){
      v = ServiceStatusIncident_Severity_t::info_E;
      return;
    }
    if(s == "warn"){
      v = ServiceStatusIncident_Severity_t::warn_E;
      return;
    }
    if(s == "error"){
      v = ServiceStatusIncident_Severity_t::error_E;
      return;
    }
  }
  inline std::string to_string(const ServiceStatusIncident_Severity_t& v) {
    switch(v) {
      case ServiceStatusIncident_Severity_t::info_E:
        return "info";
      case ServiceStatusIncident_Severity_t::warn_E:
        return "warn";
      case ServiceStatusIncident_Severity_t::error_E:
        return "error";
    }
  }

}
