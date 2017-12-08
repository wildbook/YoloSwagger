#pragma once
#include <json.hpp>
#include <optional>
#include "ServiceStatusResource_Status.hpp"
namespace leagueapi {
  struct ServiceStatusResource_t {
    ServiceStatusResource_Status_t status;
    std::string_t humanReadableUrl;
  };

  inline void to_json(nlohmann::json& j, const ServiceStatusResource_t& v) {
    j["status"] = v.status;
    j["humanReadableUrl"] = v.humanReadableUrl;
  }

  inline void from_json(const nlohmann::json& j, ServiceStatusResource_t& v) {
    v.status = j.at("status").get<ServiceStatusResource_Status_t>();
    v.humanReadableUrl = j.at("humanReadableUrl").get<std::string_t>();
  }
  inline std::string to_string(const ServiceStatusResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
