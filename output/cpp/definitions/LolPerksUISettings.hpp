#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksUISettings_t {
    bool_t showLongDescriptions;
    bool_t showPresetPages;
    bool_t gridModeEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolPerksUISettings_t& v) {
    j["showLongDescriptions"] = v.showLongDescriptions;
    j["showPresetPages"] = v.showPresetPages;
    j["gridModeEnabled"] = v.gridModeEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolPerksUISettings_t& v) {
    v.showLongDescriptions = j.at("showLongDescriptions").get<bool_t>();
    v.showPresetPages = j.at("showPresetPages").get<bool_t>();
    v.gridModeEnabled = j.at("gridModeEnabled").get<bool_t>();
  }
  inline std::string to_string(const LolPerksUISettings_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
