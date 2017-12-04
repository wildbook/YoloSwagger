#ifndef SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblemPosition_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblemPosition_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChampionsCollectionsChampionSkinEmblemPosition {
'    // 
    std::string horizontal;
    // 
    std::string vertical;
  };

  void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblemPosition& v) {
    j["horizontal"] = v.horizontal;
    j["vertical"] = v.vertical;
  }

  void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblemPosition& v) {
    v.horizontal = j.at("horizontal").get<std::string>;
    v.vertical = j.at("vertical").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblemPosition_HPP
