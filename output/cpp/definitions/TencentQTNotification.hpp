#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct TencentQTNotification_t {
    int64_t timestamp;
    nlohmann::json data;
    std::string updatedBy;
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const TencentQTNotification_t& v) {
    j["timestamp"] = v.timestamp;
    j["data"] = v.data;
    j["updatedBy"] = v.updatedBy;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, TencentQTNotification_t& v) {
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.data = j.at("data").get<nlohmann::json>();
    v.updatedBy = j.at("updatedBy").get<std::string>();
    v.state = j.at("state").get<std::string>();
  }
}
