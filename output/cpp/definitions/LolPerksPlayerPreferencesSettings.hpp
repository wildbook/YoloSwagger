#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksUISettings.hpp"
#include "LolPerksPerkPageResource.hpp"
namespace leagueapi {
  struct LolPerksPlayerPreferencesSettings_t {
    LolPerksUISettings_t settings;
    std::vector<LolPerksPerkPageResource_t> pages;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPlayerPreferencesSettings_t& v) {
    j["settings"] = v.settings;
    j["pages"] = v.pages;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPlayerPreferencesSettings_t& v) {
    v.settings = j.at("settings").get<LolPerksUISettings_t>();
    v.pages = j.at("pages").get<std::vector<LolPerksPerkPageResource_t>>();
  }
  inline std::string to_string(const LolPerksPlayerPreferencesSettings_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
