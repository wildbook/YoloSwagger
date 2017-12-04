#ifndef SWAGGER_TYPES_LolMissionsCollectionsChampion_HPP
#define SWAGGER_TYPES_LolMissionsCollectionsChampion_HPP
#include <json.hpp>
#include "LolMissionsCollectionsChampionSkin.hpp"
#include "LolMissionsCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolMissionsCollectionsChampion {
    // 
    bool freeToPlay;
    // 
    int32_t id;
    // 
    LolMissionsCollectionsOwnership ownership;
    // 
    std::vector<LolMissionsCollectionsChampionSkin> skins;
  };

  void to_json(nlohmann::json& j, const LolMissionsCollectionsChampion& v) {
    j["freeToPlay"] = v.freeToPlay;
    j["id"] = v.id;
    j["ownership"] = v.ownership;
    j["skins"] = v.skins;
  }

  void from_json(const nlohmann::json& j, LolMissionsCollectionsChampion& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>;
    v.id = j.at("id").get<int32_t>;
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>;
    v.skins = j.at("skins").get<std::vector<LolMissionsCollectionsChampionSkin>>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsCollectionsChampion_HPP
