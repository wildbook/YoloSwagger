#ifndef SWAGGER_TYPES_TencentQTNotification_HPP
#define SWAGGER_TYPES_TencentQTNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct TencentQTNotification {
    // 
    nlohmann::json data;
    // 
    std::string state;
    // 
    int64_t timestamp;
    // 
    std::string updatedBy;
  };

  void to_json(nlohmann::json& j, const TencentQTNotification& v) {
    j["data"] = v.data;
    j["state"] = v.state;
    j["timestamp"] = v.timestamp;
    j["updatedBy"] = v.updatedBy;
  }

  void from_json(const nlohmann::json& j, TencentQTNotification& v) {
    v.data = j.at("data").get<nlohmann::json>;
    v.state = j.at("state").get<std::string>;
    v.timestamp = j.at("timestamp").get<int64_t>;
    v.updatedBy = j.at("updatedBy").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_TencentQTNotification_HPP
