#ifndef SWAGGER_TYPES_LolCollectionsGameDataChampionMasteries_HPP
#define SWAGGER_TYPES_LolCollectionsGameDataChampionMasteries_HPP
#include <json.hpp>
#include "LolCollectionsGameDataChampionMasteryTree.hpp"
namespace test {
  // 
  struct LolCollectionsGameDataChampionMasteries {
'    // 
    LolCollectionsGameDataChampionMasteryTree tree;
  };

  void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteries& v) {
    j["tree"] = v.tree;
  }

  void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteries& v) {
    v.tree = j.at("tree").get<LolCollectionsGameDataChampionMasteryTree>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsGameDataChampionMasteries_HPP
