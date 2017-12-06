#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsGameDataChampionMasteryRow.hpp"
namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteryGroup_t {
    uint32_t id;
    std::vector<LolCollectionsGameDataChampionMasteryRow_t> rows;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteryGroup_t& v) {
    j["id"] = v.id;
    j["rows"] = v.rows;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteryGroup_t& v) {
    v.id = j.at("id").get<uint32_t>();
    v.rows = j.at("rows").get<std::vector<LolCollectionsGameDataChampionMasteryRow_t>>();
  }
}
