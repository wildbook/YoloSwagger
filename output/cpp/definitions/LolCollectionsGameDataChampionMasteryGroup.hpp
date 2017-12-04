#ifndef SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryGroup_HPP
#define SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryGroup_HPP
#include <json.hpp>
#include "LolCollectionsGameDataChampionMasteryRow.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsGameDataChampionMasteryGroup {
    // 
    std::vector<LolCollectionsGameDataChampionMasteryRow> rows;
    // 
    uint32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteryGroup& v) {
    j["rows"] = v.rows;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteryGroup& v) {
    v.rows = j.at("rows").get<std::vector<LolCollectionsGameDataChampionMasteryRow>>;
    v.id = j.at("id").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryGroup_HPP
