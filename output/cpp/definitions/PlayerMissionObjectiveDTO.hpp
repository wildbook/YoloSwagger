#pragma once
#include <json.hpp>
#include <optional>
#include "MissionProgressDTO.hpp"
namespace leagueapi {
  struct PlayerMissionObjectiveDTO_t {
    std::string description;
    std::string type;
    MissionProgressDTO_t progress;
    int32_t sequence;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionObjectiveDTO_t& v) {
    j["description"] = v.description;
    j["type"] = v.type;
    j["progress"] = v.progress;
    j["sequence"] = v.sequence;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionObjectiveDTO_t& v) {
    v.description = j.at("description").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.progress = j.at("progress").get<MissionProgressDTO_t>();
    v.sequence = j.at("sequence").get<int32_t>();
  }
  inline std::string to_string(const PlayerMissionObjectiveDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
