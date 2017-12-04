#ifndef SWAGGER_TYPES_LolLootCollectionsChampionMinimal_HPP
#define SWAGGER_TYPES_LolLootCollectionsChampionMinimal_HPP
#include <json.hpp>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolLootCollectionsChampionMinimal {
    // 
    int32_t id;
    // 
    LolLootCollectionsOwnership ownership;
  };

  void to_json(nlohmann::json& j, const LolLootCollectionsChampionMinimal& v) {
    j["id"] = v.id;
    j["ownership"] = v.ownership;
  }

  void from_json(const nlohmann::json& j, LolLootCollectionsChampionMinimal& v) {
    v.id = j.at("id").get<int32_t>;
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>;
  }

}
#endif // SWAGGER_TYPES_LolLootCollectionsChampionMinimal_HPP
