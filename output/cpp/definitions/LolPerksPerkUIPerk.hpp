#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkUIPerk_t {
    std::string longDesc;
    std::string iconPath;
    int32_t id;
    std::string name;
    std::string shortDesc;
    std::string tooltip;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkUIPerk_t& v) {
    j["longDesc"] = v.longDesc;
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
    j["name"] = v.name;
    j["shortDesc"] = v.shortDesc;
    j["tooltip"] = v.tooltip;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkUIPerk_t& v) {
    v.longDesc = j.at("longDesc").get<std::string>();
    v.iconPath = j.at("iconPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.shortDesc = j.at("shortDesc").get<std::string>();
    v.tooltip = j.at("tooltip").get<std::string>();
  }
  inline std::string to_string(const LolPerksPerkUIPerk_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
