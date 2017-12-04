#ifndef SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblem_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblem_HPP
#include <json.hpp>
#include "LolChampionsCollectionsChampionSkinEmblemPosition.hpp"
#include "LolChampionsCollectionsChampionSkinEmblemPath.hpp"
namespace leagueapi {
  // 
  struct LolChampionsCollectionsChampionSkinEmblem {
    // 
    LolChampionsCollectionsChampionSkinEmblemPath emblemPath;
    // 
    std::string name;
    // 
    LolChampionsCollectionsChampionSkinEmblemPosition positions;
  };

  void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblem& v) {
    j["emblemPath"] = v.emblemPath;
    j["name"] = v.name;
    j["positions"] = v.positions;
  }

  void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblem& v) {
    v.emblemPath = j.at("emblemPath").get<LolChampionsCollectionsChampionSkinEmblemPath>;
    v.name = j.at("name").get<std::string>;
    v.positions = j.at("positions").get<LolChampionsCollectionsChampionSkinEmblemPosition>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblem_HPP
