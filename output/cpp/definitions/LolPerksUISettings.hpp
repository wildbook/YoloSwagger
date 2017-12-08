#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksUISettings_t {
    bool showPresetPages;
    bool gridModeEnabled;
    bool showLongDescriptions;
  };

  inline void to_json(nlohmann::json& j, const LolPerksUISettings_t& v) {
    j["showPresetPages"] = v.showPresetPages;
    j["gridModeEnabled"] = v.gridModeEnabled;
    j["showLongDescriptions"] = v.showLongDescriptions;
  }

  inline void from_json(const nlohmann::json& j, LolPerksUISettings_t& v) {
    v.showPresetPages = j.at("showPresetPages").get<bool>();
    v.gridModeEnabled = j.at("gridModeEnabled").get<bool>();
    v.showLongDescriptions = j.at("showLongDescriptions").get<bool>();
  }
  inline std::string to_string(const LolPerksUISettings_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
