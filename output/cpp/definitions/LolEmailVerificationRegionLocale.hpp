#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEmailVerificationRegionLocale_t {
    std::string_t locale;
    std::string_t region;
    std::string_t webRegion;
    std::string_t webLanguage;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationRegionLocale_t& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
    j["webRegion"] = v.webRegion;
    j["webLanguage"] = v.webLanguage;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationRegionLocale_t& v) {
    v.locale = j.at("locale").get<std::string_t>();
    v.region = j.at("region").get<std::string_t>();
    v.webRegion = j.at("webRegion").get<std::string_t>();
    v.webLanguage = j.at("webLanguage").get<std::string_t>();
  }
  inline std::string to_string(const LolEmailVerificationRegionLocale_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
