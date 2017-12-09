#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksPerkUISlot.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace leagueapi {
  struct LolPerksPerkUIStyle_t {
    std::string tooltip;
    std::string defaultPageName;
    int32_t defaultSubStyle;
    std::vector<int32_t> allowedSubStyles;
    std::string name;
    int32_t id;
    std::vector<int32_t> defaultPerks;
    std::vector<LolPerksPerkSubStyleBonusResource_t> subStyleBonus;
    std::string iconPath;
    std::vector<LolPerksPerkUISlot_t> slots;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkUIStyle_t& v) {
    j["tooltip"] = v.tooltip;
    j["defaultPageName"] = v.defaultPageName;
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["allowedSubStyles"] = v.allowedSubStyles;
    j["name"] = v.name;
    j["id"] = v.id;
    j["defaultPerks"] = v.defaultPerks;
    j["subStyleBonus"] = v.subStyleBonus;
    j["iconPath"] = v.iconPath;
    j["slots"] = v.slots;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkUIStyle_t& v) {
    v.tooltip = j.at("tooltip").get<std::string>();
    v.defaultPageName = j.at("defaultPageName").get<std::string>();
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>();
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>();
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource_t>>();
    v.iconPath = j.at("iconPath").get<std::string>();
    v.slots = j.at("slots").get<std::vector<LolPerksPerkUISlot_t>>();
  }
  inline std::string to_string(const LolPerksPerkUIStyle_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
