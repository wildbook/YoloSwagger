#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksPerkStyleSlotResource.hpp"
#include "LolPerksPerkSubStyleBonusResource.hpp"
namespace leagueapi {
  struct LolPerksPerkStyleResource_t {
    std::vector<LolPerksPerkSubStyleBonusResource_t> subStyleBonus;
    bool_t isAdvanced;
    std::string_t name;
    std::vector<int32_t> defaultPerks;
    std::string_t tooltip;
    std::string_t defaultPageName;
    std::vector<int32_t> allowedSubStyles;
    int32_t_t defaultSubStyle;
    std::string_t iconPath;
    std::vector<LolPerksPerkStyleSlotResource_t> slots;
    int32_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkStyleResource_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolPerksPerkStyleResource_t& v) {
    v.subStyleBonus = j.at("subStyleBonus").get<std::vector<LolPerksPerkSubStyleBonusResource_t>>();
    v.isAdvanced = j.at("isAdvanced").get<bool_t>();
    v.name = j.at("name").get<std::string_t>();
    v.defaultPerks = j.at("defaultPerks").get<std::vector<int32_t>>();
    v.tooltip = j.at("tooltip").get<std::string_t>();
    v.defaultPageName = j.at("defaultPageName").get<std::string_t>();
    v.allowedSubStyles = j.at("allowedSubStyles").get<std::vector<int32_t>>();
    v.defaultSubStyle = j.at("defaultSubStyle").get<int32_t_t>();
    v.iconPath = j.at("iconPath").get<std::string_t>();
    v.slots = j.at("slots").get<std::vector<LolPerksPerkStyleSlotResource_t>>();
    v.id = j.at("id").get<int32_t_t>();
  }
  inline std::string to_string(const LolPerksPerkStyleResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
