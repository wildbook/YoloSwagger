#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLicenseAgreementPluginRegionLocaleChangedEvent_t {
    std::string region;
    std::string locale;
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementPluginRegionLocaleChangedEvent_t& v) {
    j["region"] = v.region;
    j["locale"] = v.locale;
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementPluginRegionLocaleChangedEvent_t& v) {
    v.region = j.at("region").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
  }
  inline std::string to_string(const LolLicenseAgreementPluginRegionLocaleChangedEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
