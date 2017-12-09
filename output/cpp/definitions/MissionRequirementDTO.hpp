#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MissionRequirementDTO_t {
    std::string description;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const MissionRequirementDTO_t& v) {
    j["description"] = v.description;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, MissionRequirementDTO_t& v) {
    v.description = j.at("description").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const MissionRequirementDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
