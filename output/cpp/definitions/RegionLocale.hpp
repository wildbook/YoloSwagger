#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RegionLocale_t {
    std::string region;
    std::string webLanguage;
    std::string webRegion;
    std::string locale;
  };

  inline void to_json(nlohmann::json& j, const RegionLocale_t& v) {
    j["region"] = v.region;
    j["webLanguage"] = v.webLanguage;
    j["webRegion"] = v.webRegion;
    j["locale"] = v.locale;
  }

  inline void from_json(const nlohmann::json& j, RegionLocale_t& v) {
    v.region = j.at("region").get<std::string>();
    v.webLanguage = j.at("webLanguage").get<std::string>();
    v.webRegion = j.at("webRegion").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
  }
  inline std::string to_string(const RegionLocale_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
