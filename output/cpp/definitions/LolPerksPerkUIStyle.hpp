#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksPerkSubStyleBonusResource.hpp"
#include "LolPerksPerkUISlot.hpp"
namespace leagueapi {
  struct LolPerksPerkUIStyle_t {
    std::string defaultPageName;
    std::string tooltip;
    std::string iconPath;
    int32_t id;
    std::string name;
    std::vector<LolPerksPerkUISlot_t> slots;
    int32_t defaultSubStyle;
    std::vector<LolPerksPerkSubStyleBonusResource_t> subStyleBonus;
    std::vector<int32_t> defaultPerks;
    std::vector<int32_t> allowedSubStyles;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkUIStyle_t& v) {
    j["defaultPageName"] = v.defaultPageName;
    j["tooltip"] = v.tooltip;
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
    j["name"] = v.name;
    j["slots"] = v.slots;
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["subStyleBonus"] = v.subStyleBonus;
    j["defaultPerks"] = v.defaultPerks;
    j["allowedSubStyles"] = v.allowedSubStyles;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkUIStyle_t& v) {
    v.defaultPageName = j.at("defaultPageName").get<std::string>();
    v.tooltip = j.at("tooltip").get<std::string>();
    v.iconPath = j.at("iconPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.slots = j.at("slots").get<std::vector<LolPerksPerkUISlot_t>>();
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>();
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource_t>>();
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>();
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolPerksPerkUIStyle_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
