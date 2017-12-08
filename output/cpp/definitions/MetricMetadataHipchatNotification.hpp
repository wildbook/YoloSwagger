#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MetricMetadataHipchatNotification_t {
    std::string roomid;
    std::string tags;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataHipchatNotification_t& v) {
    j["roomid"] = v.roomid;
    j["tags"] = v.tags;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataHipchatNotification_t& v) {
    v.roomid = j.at("roomid").get<std::string>();
    v.tags = j.at("tags").get<std::string>();
  }
  inline std::string to_string(const MetricMetadataHipchatNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
