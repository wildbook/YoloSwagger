#ifndef SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryTree_HPP
#define SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryTree_HPP
#include <json.hpp>
#include "LolCollectionsGameDataChampionMasteryGroup.hpp"
namespace test {
  // 
  struct LolCollectionsGameDataChampionMasteryTree {
'    // 
    std::vector<LolCollectionsGameDataChampionMasteryGroup> groups;
  };

  void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteryTree& v) {
    j["groups"] = v.groups;
  }

  void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteryTree& v) {
    v.groups = j.at("groups").get<std::vector<LolCollectionsGameDataChampionMasteryGroup>>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsGameDataChampionMasteryTree_HPP
