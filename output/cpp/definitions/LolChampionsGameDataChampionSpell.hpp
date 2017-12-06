#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsGameDataChampionSpell_t {
    std::string description;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSpell_t& v) {
    j["description"] = v.description;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSpell_t& v) {
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
}
