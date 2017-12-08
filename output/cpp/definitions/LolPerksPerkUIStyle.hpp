#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksPerkUISlot.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace leagueapi {
  struct LolPerksPerkUIStyle_t {
    std::vector<LolPerksPerkUISlot_t> slots;
    std::string iconPath;
    std::vector<LolPerksPerkSubStyleBonusResource_t> subStyleBonus;
    int32_t id;
    int32_t defaultSubStyle;
    std::vector<int32_t> allowedSubStyles;
    std::string name;
    std::string defaultPageName;
    std::string tooltip;
    std::vector<int32_t> defaultPerks;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkUIStyle_t& v) {
    j["slots"] = v.slots;
    j["iconPath"] = v.iconPath;
    j["subStyleBonus"] = v.subStyleBonus;
    j["id"] = v.id;
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["allowedSubStyles"] = v.allowedSubStyles;
    j["name"] = v.name;
    j["defaultPageName"] = v.defaultPageName;
    j["tooltip"] = v.tooltip;
    j["defaultPerks"] = v.defaultPerks;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkUIStyle_t& v) {
    v.slots = j.at("slots").get<std::vector<LolPerksPerkUISlot_t>>();
    v.iconPath = j.at("iconPath").get<std::string>();
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource_t>>();
    v.id = j.at("id").get<int32_t>();
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>();
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>();
    v.name = j.at("name").get<std::string>();
    v.defaultPageName = j.at("defaultPageName").get<std::string>();
    v.tooltip = j.at("tooltip").get<std::string>();
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolPerksPerkUIStyle_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
