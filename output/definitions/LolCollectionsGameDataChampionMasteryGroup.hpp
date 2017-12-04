#ifndef SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryGroup_HPP
#define SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryGroup_HPP
#include <json.hpp>
#include "LolCollectionsGameDataChampionMasteryRow.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsGameDataChampionMasteryGroup {
    // 
    uint32_t id;
    // 
    std::vector<LolCollectionsGameDataChampionMasteryRow> rows;
  };

  void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteryGroup& v) {
    j["id"] = v.id;
    j["rows"] = v.rows;
  }

  void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteryGroup& v) {
    v.id = j.at("id").get<uint32_t>;
    v.rows = j.at("rows").get<std::vector<LolCollectionsGameDataChampionMasteryRow>>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryGroup_HPP
