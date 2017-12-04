#ifndef SWAGGER_TYPES_LolPerksPerkUIPerk_HPP
#define SWAGGER_TYPES_LolPerksPerkUIPerk_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksPerkUIPerk {
    // 
    std::string name;
    // 
    std::string tooltip;
    // 
    std::string longDesc;
    // 
    std::string iconPath;
    // 
    std::string shortDesc;
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkUIPerk& v) {
    j["name"] = v.name;
    j["tooltip"] = v.tooltip;
    j["longDesc"] = v.longDesc;
    j["iconPath"] = v.iconPath;
    j["shortDesc"] = v.shortDesc;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkUIPerk& v) {
    v.name = j.at("name").get<std::string>;
    v.tooltip = j.at("tooltip").get<std::string>;
    v.longDesc = j.at("longDesc").get<std::string>;
    v.iconPath = j.at("iconPath").get<std::string>;
    v.shortDesc = j.at("shortDesc").get<std::string>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPerkUIPerk_HPP
