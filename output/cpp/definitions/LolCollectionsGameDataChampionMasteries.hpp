#ifndef SWAGGER_TYPES_LolCollectionsGameDataChampionMasteries_HPP
#define SWAGGER_TYPES_LolCollectionsGameDataChampionMasteries_HPP
#include <json.hpp>
#include "LolCollectionsGameDataChampionMasteryTree.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsGameDataChampionMasteries {
    // 
    LolCollectionsGameDataChampionMasteryTree tree;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteries& v) {
    j["tree"] = v.tree;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteries& v) {
    v.tree = j.at("tree").get<LolCollectionsGameDataChampionMasteryTree>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsGameDataChampionMasteries_HPP