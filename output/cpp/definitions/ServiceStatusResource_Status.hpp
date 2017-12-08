#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ServiceStatusResource_Status_t {
    unknown_E = 0,
    degraded_E = 3,
    offline_E = 2,
    deploying_E = 4,
    online_E = 1,
  };

  inline void to_json(nlohmann::json& j, const ServiceStatusResource_Status_t& v) {
    switch(v) {
      case ServiceStatusResource_Status_t::unknown_E:
        j = "unknown";
      break;
      case ServiceStatusResource_Status_t::degraded_E:
        j = "degraded";
      break;
      case ServiceStatusResource_Status_t::offline_E:
        j = "offline";
      break;
      case ServiceStatusResource_Status_t::deploying_E:
        j = "deploying";
      break;
      case ServiceStatusResource_Status_t::online_E:
        j = "online";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ServiceStatusResource_Status_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "unknown"){
      v = ServiceStatusResource_Status_t::unknown_E;
      return;
    }
    if(s == "degraded"){
      v = ServiceStatusResource_Status_t::degraded_E;
      return;
    }
    if(s == "offline"){
      v = ServiceStatusResource_Status_t::offline_E;
      return;
    }
    if(s == "deploying"){
      v = ServiceStatusResource_Status_t::deploying_E;
      return;
    }
    if(s == "online"){
      v = ServiceStatusResource_Status_t::online_E;
      return;
    }
  }
  inline std::string to_string(const ServiceStatusResource_Status_t& v) {
    switch(v) {
      case ServiceStatusResource_Status_t::unknown_E:
        return "unknown";
      case ServiceStatusResource_Status_t::degraded_E:
        return "degraded";
      case ServiceStatusResource_Status_t::offline_E:
        return "offline";
      case ServiceStatusResource_Status_t::deploying_E:
        return "deploying";
      case ServiceStatusResource_Status_t::online_E:
        return "online";
    }
  }

}
