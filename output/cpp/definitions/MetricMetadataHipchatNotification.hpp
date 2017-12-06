#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MetricMetadataHipchatNotification_t {
    std::string tags;
    std::string roomid;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataHipchatNotification_t& v) {
    j["tags"] = v.tags;
    j["roomid"] = v.roomid;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataHipchatNotification_t& v) {
    v.tags = j.at("tags").get<std::string>();
    v.roomid = j.at("roomid").get<std::string>();
  }
}
