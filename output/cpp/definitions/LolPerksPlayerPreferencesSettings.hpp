#pragma once
#include <json.hpp>
#include <optional>
#include "LolPerksPerkPageResource.hpp"
#include "LolPerksUISettings.hpp"
namespace leagueapi {
  struct LolPerksPlayerPreferencesSettings_t {
    std::vector<LolPerksPerkPageResource_t> pages;
    LolPerksUISettings_t settings;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPlayerPreferencesSettings_t& v) {
    j["pages"] = v.pages;
    j["settings"] = v.settings;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPlayerPreferencesSettings_t& v) {
    v.pages = j.at("pages").get<std::vector<LolPerksPerkPageResource_t>>();
    v.settings = j.at("settings").get<LolPerksUISettings_t>();
  }
  inline std::string to_string(const LolPerksPlayerPreferencesSettings_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
