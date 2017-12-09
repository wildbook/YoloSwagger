#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsGameDataChampionSpell_t {
    std::string name;
    std::string description;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSpell_t& v) {
    j["name"] = v.name;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSpell_t& v) {
    v.name = j.at("name").get<std::string>();
    v.description = j.at("description").get<std::string>();
  }
  inline std::string to_string(const LolChampionsGameDataChampionSpell_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
