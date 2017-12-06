#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLicenseAgreementPluginRegionLocaleChangedEvent_t {
    std::string locale;
    std::string region;
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementPluginRegionLocaleChangedEvent_t& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementPluginRegionLocaleChangedEvent_t& v) {
    v.locale = j.at("locale").get<std::string>();
    v.region = j.at("region").get<std::string>();
  }
}
