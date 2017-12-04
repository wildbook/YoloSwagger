#ifndef SWAGGER_TYPES_TencentQTNotification_HPP
#define SWAGGER_TYPES_TencentQTNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct TencentQTNotification {
    // 
    int64_t timestamp;
    // 
    std::string state;
    // 
    nlohmann::json data;
    // 
    std::string updatedBy;
  };

  inline void to_json(nlohmann::json& j, const TencentQTNotification& v) {
    j["timestamp"] = v.timestamp;
    j["state"] = v.state;
    j["data"] = v.data;
    j["updatedBy"] = v.updatedBy;
  }

  inline void from_json(const nlohmann::json& j, TencentQTNotification& v) {
    v.timestamp = j.at("timestamp").get<int64_t>;
    v.state = j.at("state").get<std::string>;
    v.data = j.at("data").get<nlohmann::json>;
    v.updatedBy = j.at("updatedBy").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_TencentQTNotification_HPP
