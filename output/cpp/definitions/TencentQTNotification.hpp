#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct TencentQTNotification_t {
    int64_t_t timestamp;
    std::string_t state;
    nlohmann::json_t data;
    std::string_t updatedBy;
  };

  inline void to_json(nlohmann::json& j, const TencentQTNotification_t& v) {
    j["timestamp"] = v.timestamp;
    j["state"] = v.state;
    j["data"] = v.data;
    j["updatedBy"] = v.updatedBy;
  }

  inline void from_json(const nlohmann::json& j, TencentQTNotification_t& v) {
    v.timestamp = j.at("timestamp").get<int64_t_t>();
    v.state = j.at("state").get<std::string_t>();
    v.data = j.at("data").get<nlohmann::json_t>();
    v.updatedBy = j.at("updatedBy").get<std::string_t>();
  }
  inline std::string to_string(const TencentQTNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
