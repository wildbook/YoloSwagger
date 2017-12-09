#pragma once
#include <json.hpp>
#include <optional>
#include "MissionProgressDTO.hpp"
namespace leagueapi {
  struct PlayerMissionObjectiveDTO_t {
    MissionProgressDTO_t progress;
    int32_t sequence;
    std::string description;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionObjectiveDTO_t& v) {
    j["progress"] = v.progress;
    j["sequence"] = v.sequence;
    j["description"] = v.description;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionObjectiveDTO_t& v) {
    v.progress = j.at("progress").get<MissionProgressDTO_t>();
    v.sequence = j.at("sequence").get<int32_t>();
    v.description = j.at("description").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const PlayerMissionObjectiveDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
