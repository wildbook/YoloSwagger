#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkUIPerk_t {
    std::string longDesc;
    std::string name;
    int32_t id;
    std::string iconPath;
    std::string tooltip;
    std::string shortDesc;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkUIPerk_t& v) {
    j["longDesc"] = v.longDesc;
    j["name"] = v.name;
    j["id"] = v.id;
    j["iconPath"] = v.iconPath;
    j["tooltip"] = v.tooltip;
    j["shortDesc"] = v.shortDesc;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkUIPerk_t& v) {
    v.longDesc = j.at("longDesc").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.iconPath = j.at("iconPath").get<std::string>();
    v.tooltip = j.at("tooltip").get<std::string>();
    v.shortDesc = j.at("shortDesc").get<std::string>();
  }
  inline std::string to_string(const LolPerksPerkUIPerk_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
