#ifndef SWAGGER_TYPES_LolCollectionsGameDataChampionSummary_HPP
#define SWAGGER_TYPES_LolCollectionsGameDataChampionSummary_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsGameDataChampionSummary {
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionSummary& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionSummary& v) {
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsGameDataChampionSummary_HPP
