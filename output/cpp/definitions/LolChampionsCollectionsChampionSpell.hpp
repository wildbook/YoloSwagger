#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsChampionSpell_t {
    std::string name;
    std::string description;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSpell_t& v) {
    j["name"] = v.name;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSpell_t& v) {
    v.name = j.at("name").get<std::string>();
    v.description = j.at("description").get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSpell_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
