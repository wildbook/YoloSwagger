#ifndef SWAGGER_TYPES_MissionIdsDTO_HPP
#define SWAGGER_TYPES_MissionIdsDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MissionIdsDTO {
    // 
    std::vector<std::string> missionIds;
  };

  inline void to_json(nlohmann::json& j, const MissionIdsDTO& v) {
    j["missionIds"] = v.missionIds;
  }

  inline void from_json(const nlohmann::json& j, MissionIdsDTO& v) {
    v.missionIds = j.at("missionIds").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_MissionIdsDTO_HPP
