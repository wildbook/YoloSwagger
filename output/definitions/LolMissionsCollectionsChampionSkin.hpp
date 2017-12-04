#ifndef SWAGGER_TYPES_LolMissionsCollectionsChampionSkin_HPP
#define SWAGGER_TYPES_LolMissionsCollectionsChampionSkin_HPP
#include <json.hpp>
#include "LolMissionsCollectionsOwnership.hpp"
namespace test {
  // 
  struct LolMissionsCollectionsChampionSkin {
'    // 
    int32_t championId;
    // 
    int32_t id;
    // 
    LolMissionsCollectionsOwnership ownership;
  };

  void to_json(nlohmann::json& j, const LolMissionsCollectionsChampionSkin& v) {
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["ownership"] = v.ownership;
  }

  void from_json(const nlohmann::json& j, LolMissionsCollectionsChampionSkin& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.id = j.at("id").get<int32_t>;
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsCollectionsChampionSkin_HPP
