#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MissionAlertDTO_t {
    int64_t alertTime;
    std::string type;
    std::string message;
  };

  inline void to_json(nlohmann::json& j, const MissionAlertDTO_t& v) {
    j["alertTime"] = v.alertTime;
    j["type"] = v.type;
    j["message"] = v.message;
  }

  inline void from_json(const nlohmann::json& j, MissionAlertDTO_t& v) {
    v.alertTime = j.at("alertTime").get<int64_t>();
    v.type = j.at("type").get<std::string>();
    v.message = j.at("message").get<std::string>();
  }
  inline std::string to_string(const MissionAlertDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
