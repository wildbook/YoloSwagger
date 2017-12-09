#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct TencentQTNotification_t {
    nlohmann::json data;
    std::string state;
    std::string updatedBy;
    int64_t timestamp;
  };

  inline void to_json(nlohmann::json& j, const TencentQTNotification_t& v) {
    j["data"] = v.data;
    j["state"] = v.state;
    j["updatedBy"] = v.updatedBy;
    j["timestamp"] = v.timestamp;
  }

  inline void from_json(const nlohmann::json& j, TencentQTNotification_t& v) {
    v.data = j.at("data").get<nlohmann::json>();
    v.state = j.at("state").get<std::string>();
    v.updatedBy = j.at("updatedBy").get<std::string>();
    v.timestamp = j.at("timestamp").get<int64_t>();
  }
  inline std::string to_string(const TencentQTNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
