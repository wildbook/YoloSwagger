#ifndef SWAGGER_TYPES_LolPerksPerkUIStyle_HPP
#define SWAGGER_TYPES_LolPerksPerkUIStyle_HPP
#include <json.hpp>
#include "LolPerksPerkUISlot.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace leagueapi {
  // 
  struct LolPerksPerkUIStyle {
    // 
    std::vector<LolPerksPerkSubStyleBonusResource> subStyleBonus;
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
    std::vector<LolPerksPerkUISlot> slots;
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkUIStyle& v) {
    j["subStyleBonus"] = v.subStyleBonus;
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

  inline void from_json(const nlohmann::json& j, LolPerksPerkUIStyle& v) {
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource>>;
    v.name = j.at("name").get<std::string>;
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>;
    v.tooltip = j.at("tooltip").get<std::string>;
    v.defaultPageName = j.at("defaultPageName").get<std::string>;
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>;
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>;
    v.iconPath = j.at("iconPath").get<std::string>;
    v.slots = j.at("slots").get<std::vector<LolPerksPerkUISlot>>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPerkUIStyle_HPP
