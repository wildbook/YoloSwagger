#ifndef SWAGGER_TYPES_LolLootCollectionsChampionSkinMinimal_HPP
#define SWAGGER_TYPES_LolLootCollectionsChampionSkinMinimal_HPP
#include <json.hpp>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolLootCollectionsChampionSkinMinimal {
    // 
    int32_t championId;
    // 
    std::string name;
    // 
    std::string splashPath;
    // 
    LolLootCollectionsOwnership ownership;
    // 
    std::string tilePath;
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsChampionSkinMinimal& v) {
    j["championId"] = v.championId;
    j["name"] = v.name;
    j["splashPath"] = v.splashPath;
    j["ownership"] = v.ownership;
    j["tilePath"] = v.tilePath;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsChampionSkinMinimal& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.splashPath = j.at("splashPath").get<std::string>;
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>;
    v.tilePath = j.at("tilePath").get<std::string>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootCollectionsChampionSkinMinimal_HPP
