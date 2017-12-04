#ifndef SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblem_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblem_HPP
#include <json.hpp>
#include "LolChampionsCollectionsChampionSkinEmblemPath.hpp"
#include "LolChampionsCollectionsChampionSkinEmblemPosition.hpp"
namespace leagueapi {
  // 
  struct LolChampionsCollectionsChampionSkinEmblem {
    // 
    LolChampionsCollectionsChampionSkinEmblemPosition positions;
    // 
    LolChampionsCollectionsChampionSkinEmblemPath emblemPath;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblem& v) {
    j["positions"] = v.positions;
    j["emblemPath"] = v.emblemPath;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblem& v) {
    v.positions = j.at("positions").get<LolChampionsCollectionsChampionSkinEmblemPosition>;
    v.emblemPath = j.at("emblemPath").get<LolChampionsCollectionsChampionSkinEmblemPath>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblem_HPP
