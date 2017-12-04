#ifndef SWAGGER_TYPES_LolEmailVerificationRegionLocale_HPP
#define SWAGGER_TYPES_LolEmailVerificationRegionLocale_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolEmailVerificationRegionLocale {
'    // 
    std::string locale;
    // 
    std::string region;
    // 
    std::string webLanguage;
    // 
    std::string webRegion;
  };

  void to_json(nlohmann::json& j, const LolEmailVerificationRegionLocale& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
    j["webLanguage"] = v.webLanguage;
    j["webRegion"] = v.webRegion;
  }

  void from_json(const nlohmann::json& j, LolEmailVerificationRegionLocale& v) {
    v.locale = j.at("locale").get<std::string>;
    v.region = j.at("region").get<std::string>;
    v.webLanguage = j.at("webLanguage").get<std::string>;
    v.webRegion = j.at("webRegion").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEmailVerificationRegionLocale_HPP
