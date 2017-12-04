#ifndef SWAGGER_TYPES_PlayerMissionObjectiveDTO_HPP
#define SWAGGER_TYPES_PlayerMissionObjectiveDTO_HPP
#include <json.hpp>
#include "MissionProgressDTO.hpp"
namespace leagueapi {
  // 
  struct PlayerMissionObjectiveDTO {
    // 
    std::string description;
    // 
    MissionProgressDTO progress;
    // 
    int32_t sequence;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionObjectiveDTO& v) {
    j["description"] = v.description;
    j["progress"] = v.progress;
    j["sequence"] = v.sequence;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionObjectiveDTO& v) {
    v.description = j.at("description").get<std::string>;
    v.progress = j.at("progress").get<MissionProgressDTO>;
    v.sequence = j.at("sequence").get<int32_t>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerMissionObjectiveDTO_HPP
