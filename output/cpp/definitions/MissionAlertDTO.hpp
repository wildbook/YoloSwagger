#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MissionAlertDTO_t {
    int64_t alertTime;
    std::string message;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const MissionAlertDTO_t& v) {
    j["alertTime"] = v.alertTime;
    j["message"] = v.message;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, MissionAlertDTO_t& v) {
    v.alertTime = j.at("alertTime").get<int64_t>();
    v.message = j.at("message").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
}
