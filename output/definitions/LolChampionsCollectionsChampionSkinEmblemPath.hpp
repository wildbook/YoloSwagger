#ifndef SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblemPath_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblemPath_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampionsCollectionsChampionSkinEmblemPath {
    // 
    std::string large;
    // 
    std::string small;
  };

  void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblemPath& v) {
    j["large"] = v.large;
    j["small"] = v.small;
  }

  void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblemPath& v) {
    v.large = j.at("large").get<std::string>;
    v.small = j.at("small").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionSkinEmblemPath_HPP
