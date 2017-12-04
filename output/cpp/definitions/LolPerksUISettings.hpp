#ifndef SWAGGER_TYPES_LolPerksUISettings_HPP
#define SWAGGER_TYPES_LolPerksUISettings_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksUISettings {
    // 
    bool showLongDescriptions;
    // 
    bool showPresetPages;
    // 
    bool gridModeEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolPerksUISettings& v) {
    j["showLongDescriptions"] = v.showLongDescriptions;
    j["showPresetPages"] = v.showPresetPages;
    j["gridModeEnabled"] = v.gridModeEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolPerksUISettings& v) {
    v.showLongDescriptions = j.at("showLongDescriptions").get<bool>;
    v.showPresetPages = j.at("showPresetPages").get<bool>;
    v.gridModeEnabled = j.at("gridModeEnabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolPerksUISettings_HPP
