#ifndef SWAGGER_TYPES_ServiceStatusIncident_Severity_HPP
#define SWAGGER_TYPES_ServiceStatusIncident_Severity_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ServiceStatusIncident_Severity {
    // 
    info = 0,
    // 
    warn = 1,
    // 
    error = 2,
  };

  inline void to_json(nlohmann::json& j, const ServiceStatusIncident_Severity& v) {
    switch(v) {
      case ServiceStatusIncident_Severity::info:
        j = "info";
      break;
      case ServiceStatusIncident_Severity::warn:
        j = "warn";
      break;
      case ServiceStatusIncident_Severity::error:
        j = "error";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ServiceStatusIncident_Severity& v) {
    const auto& s = j.get<std::string>();
    if(s == "info"){
      v = ServiceStatusIncident_Severity::info;
      return;
    }
    if(s == "warn"){
      v = ServiceStatusIncident_Severity::warn;
      return;
    }
    if(s == "error"){
      v = ServiceStatusIncident_Severity::error;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ServiceStatusIncident_Severity_HPP
