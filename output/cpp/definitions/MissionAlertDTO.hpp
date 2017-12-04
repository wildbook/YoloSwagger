#ifndef SWAGGER_TYPES_MissionAlertDTO_HPP
#define SWAGGER_TYPES_MissionAlertDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MissionAlertDTO {
    // 
    std::string type;
    // 
    std::string message;
    // 
    int64_t alertTime;
  };

  inline void to_json(nlohmann::json& j, const MissionAlertDTO& v) {
    j["type"] = v.type;
    j["message"] = v.message;
    j["alertTime"] = v.alertTime;
  }

  inline void from_json(const nlohmann::json& j, MissionAlertDTO& v) {
    v.type = j.at("type").get<std::string>;
    v.message = j.at("message").get<std::string>;
    v.alertTime = j.at("alertTime").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_MissionAlertDTO_HPP
