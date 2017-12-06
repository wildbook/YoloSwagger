#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksUISettings_t {
    bool showLongDescriptions;
    bool showPresetPages;
    bool gridModeEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolPerksUISettings_t& v) {
    j["showLongDescriptions"] = v.showLongDescriptions;
    j["showPresetPages"] = v.showPresetPages;
    j["gridModeEnabled"] = v.gridModeEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolPerksUISettings_t& v) {
    v.showLongDescriptions = j.at("showLongDescriptions").get<bool>();
    v.showPresetPages = j.at("showPresetPages").get<bool>();
    v.gridModeEnabled = j.at("gridModeEnabled").get<bool>();
  }
}
