#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MissionAlertDTO_t {
    std::string message;
    std::string type;
    int64_t alertTime;
  };

  inline void to_json(nlohmann::json& j, const MissionAlertDTO_t& v) {
    j["message"] = v.message;
    j["type"] = v.type;
    j["alertTime"] = v.alertTime;
  }

  inline void from_json(const nlohmann::json& j, MissionAlertDTO_t& v) {
    v.message = j.at("message").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.alertTime = j.at("alertTime").get<int64_t>();
  }
}
