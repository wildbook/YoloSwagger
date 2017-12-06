#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RegionLocale_t {
    std::string webLanguage;
    std::string locale;
    std::string webRegion;
    std::string region;
  };

  inline void to_json(nlohmann::json& j, const RegionLocale_t& v) {
    j["webLanguage"] = v.webLanguage;
    j["locale"] = v.locale;
    j["webRegion"] = v.webRegion;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, RegionLocale_t& v) {
    v.webLanguage = j.at("webLanguage").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.webRegion = j.at("webRegion").get<std::string>();
    v.region = j.at("region").get<std::string>();
  }
}
