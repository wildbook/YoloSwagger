#ifndef SWAGGER_TYPES_LolCollectionsCollectionsWardSkin_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsWardSkin_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsWardSkin {
    // 
    std::string wardShadowImagePath;
    // 
    std::string description;
    // 
    std::string wardImagePath;
    // 
    LolCollectionsCollectionsOwnership ownership;
    // 
    int64_t id;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsWardSkin& v) {
    j["wardShadowImagePath"] = v.wardShadowImagePath;
    j["description"] = v.description;
    j["wardImagePath"] = v.wardImagePath;
    j["ownership"] = v.ownership;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsWardSkin& v) {
    v.wardShadowImagePath = j.at("wardShadowImagePath").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.wardImagePath = j.at("wardImagePath").get<std::string>;
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership>;
    v.id = j.at("id").get<int64_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsWardSkin_HPP
