#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksPerkSubStyleBonusResource.hpp"
#include "LolPerksPerkStyleSlotResource.hpp"
namespace leagueapi {
  struct LolPerksPerkStyleResource_t {
    int32_t defaultSubStyle;
    std::string iconPath;
    int32_t id;
    std::vector<LolPerksPerkSubStyleBonusResource_t> subStyleBonus;
    std::string defaultPageName;
    std::vector<LolPerksPerkStyleSlotResource_t> slots;
    bool isAdvanced;
    std::vector<int32_t> defaultPerks;
    std::string name;
    std::string tooltip;
    std::vector<int32_t> allowedSubStyles;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkStyleResource_t& v) {
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
    j["subStyleBonus"] = v.subStyleBonus;
    j["defaultPageName"] = v.defaultPageName;
    j["slots"] = v.slots;
    j["isAdvanced"] = v.isAdvanced;
    j["defaultPerks"] = v.defaultPerks;
    j["name"] = v.name;
    j["tooltip"] = v.tooltip;
    j["allowedSubStyles"] = v.allowedSubStyles;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkStyleResource_t& v) {
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>();
    v.iconPath = j.at("iconPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource_t>>();
    v.defaultPageName = j.at("defaultPageName").get<std::string>();
    v.slots = j.at("slots").get<std::vector<LolPerksPerkStyleSlotResource_t>>();
    v.isAdvanced = j.at("isAdvanced").get<bool>();
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>();
    v.name = j.at("name").get<std::string>();
    v.tooltip = j.at("tooltip").get<std::string>();
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>();
  }
}
