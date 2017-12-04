#ifndef SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryRow_HPP
#define SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryRow_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsGameDataChampionMasteryRow {
    // 
    std::vector<uint32_t> masteries;
  };

  void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteryRow& v) {
    j["masteries"] = v.masteries;
  }

  void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteryRow& v) {
    v.masteries = j.at("masteries").get<std::vector<uint32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryRow_HPP
