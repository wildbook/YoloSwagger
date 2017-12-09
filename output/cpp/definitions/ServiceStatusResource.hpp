#pragma once
#include <json.hpp>
#include <optional>
#include "ServiceStatusResource_Status.hpp"
namespace leagueapi {
  struct ServiceStatusResource_t {
    std::string humanReadableUrl;
    ServiceStatusResource_Status_t status;
  };

  inline void to_json(nlohmann::json& j, const ServiceStatusResource_t& v) {
    j["humanReadableUrl"] = v.humanReadableUrl;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, ServiceStatusResource_t& v) {
    v.humanReadableUrl = j.at("humanReadableUrl").get<std::string>();
    v.status = j.at("status").get<ServiceStatusResource_Status_t>();
  }
  inline std::string to_string(const ServiceStatusResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
