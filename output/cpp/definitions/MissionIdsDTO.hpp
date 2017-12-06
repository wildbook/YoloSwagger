#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MissionIdsDTO_t {
    std::vector<std::string> missionIds;
  };

  inline void to_json(nlohmann::json& j, const MissionIdsDTO_t& v) {
    j["missionIds"] = v.missionIds;
  }

  inline void from_json(const nlohmann::json& j, MissionIdsDTO_t& v) {
    v.missionIds = j.at("missionIds").get<std::vector<std::string>>();
  }
}
