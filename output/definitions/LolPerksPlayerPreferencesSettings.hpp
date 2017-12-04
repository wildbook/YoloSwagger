#ifndef SWAGGER_TYPES_LolPerksPlayerPreferencesSettings_HPP
#define SWAGGER_TYPES_LolPerksPlayerPreferencesSettings_HPP
#include <json.hpp>
#include "LolPerksPerkPageResource.hpp"
#include "LolPerksUISettings.hpp"
namespace test {
  // 
  struct LolPerksPlayerPreferencesSettings {
'    // 
    std::vector<LolPerksPerkPageResource> pages;
    // 
    LolPerksUISettings settings;
  };

  void to_json(nlohmann::json& j, const LolPerksPlayerPreferencesSettings& v) {
    j["pages"] = v.pages;
    j["settings"] = v.settings;
  }

  void from_json(const nlohmann::json& j, LolPerksPlayerPreferencesSettings& v) {
    v.pages = j.at("pages").get<std::vector<LolPerksPerkPageResource>>;
    v.settings = j.at("settings").get<LolPerksUISettings>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPlayerPreferencesSettings_HPP
