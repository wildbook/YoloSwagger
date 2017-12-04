#ifndef SWAGGER_TYPES_MissionRequirementDTO_HPP
#define SWAGGER_TYPES_MissionRequirementDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MissionRequirementDTO {
    // 
    std::string type;
    // 
    std::string description;
  };

  inline void to_json(nlohmann::json& j, const MissionRequirementDTO& v) {
    j["type"] = v.type;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, MissionRequirementDTO& v) {
    v.type = j.at("type").get<std::string>;
    v.description = j.at("description").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MissionRequirementDTO_HPP
