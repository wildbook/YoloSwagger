#ifndef SWAGGER_TYPES_LolMissionsCollectionsWardSkin_HPP
#define SWAGGER_TYPES_LolMissionsCollectionsWardSkin_HPP
#include <json.hpp>
#include "LolMissionsCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolMissionsCollectionsWardSkin {
    // 
    int64_t id;
    // 
    LolMissionsCollectionsOwnership ownership;
  };

  void to_json(nlohmann::json& j, const LolMissionsCollectionsWardSkin& v) {
    j["id"] = v.id;
    j["ownership"] = v.ownership;
  }

  void from_json(const nlohmann::json& j, LolMissionsCollectionsWardSkin& v) {
    v.id = j.at("id").get<int64_t>;
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsCollectionsWardSkin_HPP
