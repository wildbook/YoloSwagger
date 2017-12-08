#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct TencentQTNotification_t {
    int64_t timestamp;
    std::string state;
    std::string updatedBy;
    nlohmann::json data;
  };

  inline void to_json(nlohmann::json& j, const TencentQTNotification_t& v) {
    j["timestamp"] = v.timestamp;
    j["state"] = v.state;
    j["updatedBy"] = v.updatedBy;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, TencentQTNotification_t& v) {
    v.timestamp = j.at("timestamp").get<int64_t>();
    v.state = j.at("state").get<std::string>();
    v.updatedBy = j.at("updatedBy").get<std::string>();
    v.data = j.at("data").get<nlohmann::json>();
  }
  inline std::string to_string(const TencentQTNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
