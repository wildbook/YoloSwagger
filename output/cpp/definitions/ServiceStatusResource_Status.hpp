#ifndef SWAGGER_TYPES_ServiceStatusResource_Status_HPP
#define SWAGGER_TYPES_ServiceStatusResource_Status_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ServiceStatusResource_Status {
    // 
    unknown = 0,
    // 
    degraded = 3,
    // 
    offline = 2,
    // 
    deploying = 4,
    // 
    online = 1,
  };

  inline void to_json(nlohmann::json& j, const ServiceStatusResource_Status& v) {
    switch(v) {
      case ServiceStatusResource_Status::unknown:
        j = "unknown";
      break;
      case ServiceStatusResource_Status::degraded:
        j = "degraded";
      break;
      case ServiceStatusResource_Status::offline:
        j = "offline";
      break;
      case ServiceStatusResource_Status::deploying:
        j = "deploying";
      break;
      case ServiceStatusResource_Status::online:
        j = "online";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ServiceStatusResource_Status& v) {
    const auto& s = j.get<std::string>();
    if(s == "unknown"){
      v = ServiceStatusResource_Status::unknown;
      return;
    }
    if(s == "degraded"){
      v = ServiceStatusResource_Status::degraded;
      return;
    }
    if(s == "offline"){
      v = ServiceStatusResource_Status::offline;
      return;
    }
    if(s == "deploying"){
      v = ServiceStatusResource_Status::deploying;
      return;
    }
    if(s == "online"){
      v = ServiceStatusResource_Status::online;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ServiceStatusResource_Status_HPP
