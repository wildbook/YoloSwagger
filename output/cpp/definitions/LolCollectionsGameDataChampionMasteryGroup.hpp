#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsGameDataChampionMasteryRow.hpp"
namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteryGroup_t {
    std::vector<LolCollectionsGameDataChampionMasteryRow_t> rows;
    uint32_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteryGroup_t& v) {
    j["rows"] = v.rows;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteryGroup_t& v) {
    v.rows = j.at("rows").get<std::vector<LolCollectionsGameDataChampionMasteryRow_t>>();
    v.id = j.at("id").get<uint32_t_t>();
  }
  inline std::string to_string(const LolCollectionsGameDataChampionMasteryGroup_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
