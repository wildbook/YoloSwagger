#pragma once
#include <json.hpp>
#include <optional>
#include "MissionProgressDTO.hpp"
namespace leagueapi {
  struct PlayerMissionObjectiveDTO_t {
    std::string description;
    MissionProgressDTO_t progress;
    int32_t sequence;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionObjectiveDTO_t& v) {
    j["description"] = v.description;
    j["progress"] = v.progress;
    j["sequence"] = v.sequence;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionObjectiveDTO_t& v) {
    v.description = j.at("description").get<std::string>();
    v.progress = j.at("progress").get<MissionProgressDTO_t>();
    v.sequence = j.at("sequence").get<int32_t>();
    v.type = j.at("type").get<std::string>();
  }
}
