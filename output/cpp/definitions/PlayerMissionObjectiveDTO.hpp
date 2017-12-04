#ifndef SWAGGER_TYPES_PlayerMissionObjectiveDTO_HPP
#define SWAGGER_TYPES_PlayerMissionObjectiveDTO_HPP
#include <json.hpp>
#include "MissionProgressDTO.hpp"
namespace leagueapi {
  // 
  struct PlayerMissionObjectiveDTO {
    // 
    MissionProgressDTO progress;
    // 
    std::string type;
    // 
    std::string description;
    // 
    int32_t sequence;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionObjectiveDTO& v) {
    j["progress"] = v.progress;
    j["type"] = v.type;
    j["description"] = v.description;
    j["sequence"] = v.sequence;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionObjectiveDTO& v) {
    v.progress = j.at("progress").get<MissionProgressDTO>;
    v.type = j.at("type").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.sequence = j.at("sequence").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerMissionObjectiveDTO_HPP
