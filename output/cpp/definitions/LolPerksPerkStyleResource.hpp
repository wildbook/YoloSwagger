#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksPerkStyleSlotResource.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace leagueapi {
  struct LolPerksPerkStyleResource_t {
    bool isAdvanced;
    std::string iconPath;
    std::vector<LolPerksPerkSubStyleBonusResource_t> subStyleBonus;
    int32_t id;
    int32_t defaultSubStyle;
    std::vector<int32_t> allowedSubStyles;
    std::string name;
    std::vector<LolPerksPerkStyleSlotResource_t> slots;
    std::string defaultPageName;
    std::string tooltip;
    std::vector<int32_t> defaultPerks;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkStyleResource_t& v) {
    j["isAdvanced"] = v.isAdvanced;
    j["iconPath"] = v.iconPath;
    j["subStyleBonus"] = v.subStyleBonus;
    j["id"] = v.id;
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["allowedSubStyles"] = v.allowedSubStyles;
    j["name"] = v.name;
    j["slots"] = v.slots;
    j["defaultPageName"] = v.defaultPageName;
    j["tooltip"] = v.tooltip;
    j["defaultPerks"] = v.defaultPerks;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkStyleResource_t& v) {
    v.isAdvanced = j.at("isAdvanced").get<bool>();
    v.iconPath = j.at("iconPath").get<std::string>();
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource_t>>();
    v.id = j.at("id").get<int32_t>();
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>();
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>();
    v.name = j.at("name").get<std::string>();
    v.slots = j.at("slots").get<std::vector<LolPerksPerkStyleSlotResource_t>>();
    v.defaultPageName = j.at("defaultPageName").get<std::string>();
    v.tooltip = j.at("tooltip").get<std::string>();
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolPerksPerkStyleResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
