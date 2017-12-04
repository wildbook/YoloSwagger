#ifndef SWAGGER_TYPES_ServiceStatusResource_HPP
#define SWAGGER_TYPES_ServiceStatusResource_HPP
#include <json.hpp>
#include "ServiceStatusResource_Status.hpp"
namespace test {
  // 
  struct ServiceStatusResource {
'    // 
    std::string humanReadableUrl;
    // 
    ServiceStatusResource_Status status;
  };

  void to_json(nlohmann::json& j, const ServiceStatusResource& v) {
    j["humanReadableUrl"] = v.humanReadableUrl;
    j["status"] = v.status;
  }

  void from_json(const nlohmann::json& j, ServiceStatusResource& v) {
    v.humanReadableUrl = j.at("humanReadableUrl").get<std::string>;
    v.status = j.at("status").get<ServiceStatusResource_Status>;
  }

}
#endif // SWAGGER_TYPES_ServiceStatusResource_HPP
