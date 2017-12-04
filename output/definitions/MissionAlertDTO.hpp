#ifndef SWAGGER_TYPES_MissionAlertDTO_HPP
#define SWAGGER_TYPES_MissionAlertDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct MissionAlertDTO {
'    // 
    int64_t alertTime;
    // 
    std::string message;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const MissionAlertDTO& v) {
    j["alertTime"] = v.alertTime;
    j["message"] = v.message;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, MissionAlertDTO& v) {
    v.alertTime = j.at("alertTime").get<int64_t>;
    v.message = j.at("message").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MissionAlertDTO_HPP
