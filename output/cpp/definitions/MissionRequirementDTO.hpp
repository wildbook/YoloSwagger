#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MissionRequirementDTO_t {
    std::string_t type;
    std::string_t description;
  };

  inline void to_json(nlohmann::json& j, const MissionRequirementDTO_t& v) {
    j["type"] = v.type;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, MissionRequirementDTO_t& v) {
    v.type = j.at("type").get<std::string_t>();
    v.description = j.at("description").get<std::string_t>();
  }
  inline std::string to_string(const MissionRequirementDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
