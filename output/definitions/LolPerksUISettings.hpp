#ifndef SWAGGER_TYPES_LolPerksUISettings_HPP
#define SWAGGER_TYPES_LolPerksUISettings_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksUISettings {
    // 
    bool gridModeEnabled;
    // 
    bool showLongDescriptions;
    // 
    bool showPresetPages;
  };

  inline void to_json(nlohmann::json& j, const LolPerksUISettings& v) {
    j["gridModeEnabled"] = v.gridModeEnabled;
    j["showLongDescriptions"] = v.showLongDescriptions;
    j["showPresetPages"] = v.showPresetPages;
  }

  inline void from_json(const nlohmann::json& j, LolPerksUISettings& v) {
    v.gridModeEnabled = j.at("gridModeEnabled").get<bool>;
    v.showLongDescriptions = j.at("showLongDescriptions").get<bool>;
    v.showPresetPages = j.at("showPresetPages").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolPerksUISettings_HPP
