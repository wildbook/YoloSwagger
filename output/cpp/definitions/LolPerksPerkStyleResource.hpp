#ifndef SWAGGER_TYPES_LolPerksPerkStyleResource_HPP
#define SWAGGER_TYPES_LolPerksPerkStyleResource_HPP
#include <json.hpp>
#include "LolPerksPerkStyleSlotResource.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace leagueapi {
  // 
  struct LolPerksPerkStyleResource {
    // 
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;
    // 
    bool isAdvanced;
    // 
    std::string name;
    // 
    std::vector<int32_t> defaultPerks;
    // 
    std::string tooltip;
    // 
    std::string defaultPageName;
    // 
    std::vector<int32_t> allowedSubStyles;
    // 
    int32_t defaultSubStyle;
    // 
    std::string iconPath;
    // 
    std::vector<LolPerksPerkStyleSlotResource> slots;
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkStyleResource& v) {
    j["subStyleBonus"] = v.subStyleBonus;
    j["isAdvanced"] = v.isAdvanced;
    j["name"] = v.name;
    j["defaultPerks"] = v.defaultPerks;
    j["tooltip"] = v.tooltip;
    j["defaultPageName"] = v.defaultPageName;
    j["allowedSubStyles"] = v.allowedSubStyles;
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["iconPath"] = v.iconPath;
    j["slots"] = v.slots;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkStyleResource& v) {
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>;
    v.isAdvanced = j.at("isAdvanced").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>;
    v.tooltip = j.at("tooltip").get<std::string>;
    v.defaultPageName = j.at("defaultPageName").get<std::string>;
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>;
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>;
    v.iconPath = j.at("iconPath").get<std::string>;
    v.slots = j.at("slots").get<std::vector<LolPerksPerkStyleSlotResource>>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPerkStyleResource_HPP
