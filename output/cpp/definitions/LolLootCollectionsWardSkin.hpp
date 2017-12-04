#ifndef SWAGGER_TYPES_LolLootCollectionsWardSkin_HPP
#define SWAGGER_TYPES_LolLootCollectionsWardSkin_HPP
#include <json.hpp>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolLootCollectionsWardSkin {
    // 
    std::string wardImagePath;
    // 
    std::string wardShadowImagePath;
    // 
    int64_t id;
    // 
    LolLootCollectionsOwnership ownership;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsWardSkin& v) {
    j["wardImagePath"] = v.wardImagePath;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["id"] = v.id;
    j["ownership"] = v.ownership;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsWardSkin& v) {
    v.wardImagePath = j.at("wardImagePath").get<std::string>;
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>;
    v.id = j.at("id").get<int64_t>;
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootCollectionsWardSkin_HPP
