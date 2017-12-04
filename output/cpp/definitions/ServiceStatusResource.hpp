#ifndef SWAGGER_TYPES_ServiceStatusResource_HPP
#define SWAGGER_TYPES_ServiceStatusResource_HPP
#include <json.hpp>
#include "ServiceStatusResource_Status.hpp"
namespace leagueapi {
  // 
  struct ServiceStatusResource {
    // 
    ServiceStatusResource_Status status;
    // 
    std::string humanReadableUrl;
  };

  inline void to_json(nlohmann::json& j, const ServiceStatusResource& v) {
    j["status"] = v.status;
    j["humanReadableUrl"] = v.humanReadableUrl;
  }

  inline void from_json(const nlohmann::json& j, ServiceStatusResource& v) {
    v.status = j.at("status").get<ServiceStatusResource_Status>;
    v.humanReadableUrl = j.at("humanReadableUrl").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ServiceStatusResource_HPP
