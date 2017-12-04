#ifndef SWAGGER_TYPES_MissionIdsDTO_HPP
#define SWAGGER_TYPES_MissionIdsDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct MissionIdsDTO {
'    // 
    std::vector<std::string> missionIds;
  };

  void to_json(nlohmann::json& j, const MissionIdsDTO& v) {
    j["missionIds"] = v.missionIds;
  }

  void from_json(const nlohmann::json& j, MissionIdsDTO& v) {
    v.missionIds = j.at("missionIds").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_MissionIdsDTO_HPP
