#ifndef SWAGGER_TYPES_LolLicenseAgreementPluginRegionLocaleChangedEvent_HPP
#define SWAGGER_TYPES_LolLicenseAgreementPluginRegionLocaleChangedEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLicenseAgreementPluginRegionLocaleChangedEvent {
    // 
    std::string locale;
    // 
    std::string region;
  };

  void to_json(nlohmann::json& j, const LolLicenseAgreementPluginRegionLocaleChangedEvent& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
  }

  void from_json(const nlohmann::json& j, LolLicenseAgreementPluginRegionLocaleChangedEvent& v) {
    v.locale = j.at("locale").get<std::string>;
    v.region = j.at("region").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLicenseAgreementPluginRegionLocaleChangedEvent_HPP
