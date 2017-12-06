#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RegionLocale_t {
    std::string locale;
    std::string region;
    std::string webLanguage;
    std::string webRegion;
  };

  inline void to_json(nlohmann::json& j, const RegionLocale_t& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
    j["webLanguage"] = v.webLanguage;
    j["webRegion"] = v.webRegion;
  }

  inline void from_json(const nlohmann::json& j, RegionLocale_t& v) {
    v.locale = j.at("locale").get<std::string>();
    v.region = j.at("region").get<std::string>();
    v.webLanguage = j.at("webLanguage").get<std::string>();
    v.webRegion = j.at("webRegion").get<std::string>();
  }
}
