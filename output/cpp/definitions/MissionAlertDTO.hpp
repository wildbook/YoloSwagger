#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MissionAlertDTO_t {
    std::string type;
    std::string message;
    int64_t alertTime;
  };

  inline void to_json(nlohmann::json& j, const MissionAlertDTO_t& v) {
    j["type"] = v.type;
    j["message"] = v.message;
    j["alertTime"] = v.alertTime;
  }

  inline void from_json(const nlohmann::json& j, MissionAlertDTO_t& v) {
    v.type = j.at("type").get<std::string>();
    v.message = j.at("message").get<std::string>();
    v.alertTime = j.at("alertTime").get<int64_t>();
  }
  inline std::string to_string(const MissionAlertDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
