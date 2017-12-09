#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksPerkSubStyleBonusResource.hpp"
#include "LolPerksPerkStyleSlotResource.hpp"
namespace leagueapi {
  struct LolPerksPerkStyleResource_t {
    std::string tooltip;
    std::string defaultPageName;
    int32_t defaultSubStyle;
    std::vector<LolPerksPerkSubStyleBonusResource_t> subStyleBonus;
    std::string iconPath;
    std::vector<int32_t> defaultPerks;
    bool isAdvanced;
    std::string name;
    std::vector<LolPerksPerkStyleSlotResource_t> slots;
    int32_t id;
    std::vector<int32_t> allowedSubStyles;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkStyleResource_t& v) {
    j["tooltip"] = v.tooltip;
    j["defaultPageName"] = v.defaultPageName;
    j["defaultSubStyle"] = v.defaultSubStyle;
    j["subStyleBonus"] = v.subStyleBonus;
    j["iconPath"] = v.iconPath;
    j["defaultPerks"] = v.defaultPerks;
    j["isAdvanced"] = v.isAdvanced;
    j["name"] = v.name;
    j["slots"] = v.slots;
    j["id"] = v.id;
    j["allowedSubStyles"] = v.allowedSubStyles;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkStyleResource_t& v) {
    v.tooltip = j.at("tooltip").get<std::string>();
    v.defaultPageName = j.at("defaultPageName").get<std::string>();
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t>();
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource_t>>();
    v.iconPath = j.at("iconPath").get<std::string>();
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>();
    v.isAdvanced = j.at("isAdvanced").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.slots = j.at("slots").get<std::vector<LolPerksPerkStyleSlotResource_t>>();
    v.id = j.at("id").get<int32_t>();
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolPerksPerkStyleResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
