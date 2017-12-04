#ifndef SWAGGER_TYPES_LolLootCollectionsWardSkin_HPP
#define SWAGGER_TYPES_LolLootCollectionsWardSkin_HPP
#include <json.hpp>
#include "LolLootCollectionsOwnership.hpp"
namespace test {
  // 
  struct LolLootCollectionsWardSkin {
'    // 
    int64_t id;
    // 
    std::string name;
    // 
    LolLootCollectionsOwnership ownership;
    // 
    std::string wardImagePath;
    // 
    std::string wardShadowImagePath;
  };

  void to_json(nlohmann::json& j, const LolLootCollectionsWardSkin& v) {
    j["id"] = v.id;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["wardImagePath"] = v.wardImagePath;
    j["wardShadowImagePath"] = v.wardShadowImagePath;
  }

  void from_json(const nlohmann::json& j, LolLootCollectionsWardSkin& v) {
    v.id = j.at("id").get<int64_t>;
    v.name = j.at("name").get<std::string>;
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>;
    v.wardImagePath = j.at("wardImagePath").get<std::string>;
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootCollectionsWardSkin_HPP
