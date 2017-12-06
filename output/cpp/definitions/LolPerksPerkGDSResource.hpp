#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkGDSResource_t {
    std::string iconPath;
    std::string name;
    std::string longDesc;
    std::string shortDesc;
    std::string tooltip;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkGDSResource_t& v) {
    j["iconPath"] = v.iconPath;
    j["name"] = v.name;
    j["longDesc"] = v.longDesc;
    j["shortDesc"] = v.shortDesc;
    j["tooltip"] = v.tooltip;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkGDSResource_t& v) {
    v.iconPath = j.at("iconPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.longDesc = j.at("longDesc").get<std::string>();
    v.shortDesc = j.at("shortDesc").get<std::string>();
    v.tooltip = j.at("tooltip").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
}
