#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksPerkStyleSlotResource.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace leagueapi {
  struct LolPerksPerkStyleResource_t {
    std::string defaultPageName;
    std::string tooltip;
    std::string iconPath;
    int32_t id;
    std::string name;
    bool isAdvanced;
    std::vector<LolPerksPerkSubStyleBonusResource_t> subStyleBonus;
    int32_t defaultSubStyle;
    std::vector<LolPerksPerkStyleSlotResource_t> slots;
    std::vector<int32_t> defaultPerks;
    std::vector<int32_t> allowedSubStyles;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkStyleResource_t& v) {
    j["defaultPageName"] = v.defaultPageName;
    j["tooltip"] = v.tooltip;
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
    j["name"] = v.name;
    j["isAdvanced"] = v.isAdvanced;
    j["subStyleBonus"] = v.subStyleBonus;
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["slots"] = v.slots;
    j["defaultPerks"] = v.defaultPerks;
    j["allowedSubStyles"] = v.allowedSubStyles;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkStyleResource_t& v) {
    v.defaultPageName = j.at("defaultPageName").get<std::string>();
    v.tooltip = j.at("tooltip").get<std::string>();
    v.iconPath = j.at("iconPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.isAdvanced = j.at("isAdvanced").get<bool>();
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource_t>>();
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>();
    v.slots = j.at("slots").get<std::vector<LolPerksPerkStyleSlotResource_t>>();
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>();
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolPerksPerkStyleResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
