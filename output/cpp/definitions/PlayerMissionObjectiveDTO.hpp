#pragma once
#include <json.hpp>
#include <optional>
#include "MissionProgressDTO.hpp"
namespace leagueapi {
  struct PlayerMissionObjectiveDTO_t {
    std::string description;
    std::string type;
    int32_t sequence;
    MissionProgressDTO_t progress;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionObjectiveDTO_t& v) {
    j["description"] = v.description;
    j["type"] = v.type;
    j["sequence"] = v.sequence;
    j["progress"] = v.progress;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionObjectiveDTO_t& v) {
    v.description = j.at("description").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.sequence = j.at("sequence").get<int32_t>();
    v.progress = j.at("progress").get<MissionProgressDTO_t>();
  }
  inline std::string to_string(const PlayerMissionObjectiveDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
