#ifndef SWAGGER_TYPES_MissionRequirementDTO_HPP
#define SWAGGER_TYPES_MissionRequirementDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct MissionRequirementDTO {
'    // 
    std::string description;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const MissionRequirementDTO& v) {
    j["description"] = v.description;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, MissionRequirementDTO& v) {
    v.description = j.at("description").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MissionRequirementDTO_HPP
