#ifndef SWAGGER_TYPES_LolPerksPerkUIStyle_HPP
#define SWAGGER_TYPES_LolPerksPerkUIStyle_HPP
#include <json.hpp>
#include "LolPerksPerkSubStyleBonusResource.hpp"
#include "LolPerksPerkUISlot.hpp"
namespace leagueapi {
  // 
  struct LolPerksPerkUIStyle {
    // 
    std::vector<int32_t> allowedSubStyles;
    // 
    std::string defaultPageName;
    // 
    std::vector<int32_t> defaultPerks;
    // 
    int32_t defaultSubStyle;
    // 
    std::string iconPath;
    // 
    int32_t id;
    // 
    std::string name;
    // 
    std::vector<LolPerksPerkUISlot> slots;
    // 
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;
    // 
    std::string tooltip;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkUIStyle& v) {
    j["allowedSubStyles"] = v.allowedSubStyles;
    j["defaultPageName"] = v.defaultPageName;
    j["defaultPerks"] = v.defaultPerks;
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
    j["name"] = v.name;
    j["slots"] = v.slots;
    j["subStyleBonus"] = v.subStyleBonus;
    j["tooltip"] = v.tooltip;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkUIStyle& v) {
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>;
    v.defaultPageName = j.at("defaultPageName").get<std::string>;
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>;
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>;
    v.iconPath = j.at("iconPath").get<std::string>;
    v.id = j.at("id").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.slots = j.at("slots").get<std::vector<LolPerksPerkUISlot>>;
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>;
    v.tooltip = j.at("tooltip").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPerkUIStyle_HPP
