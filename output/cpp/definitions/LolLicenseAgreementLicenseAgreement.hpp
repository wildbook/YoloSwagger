#pragma once
#include <json.hpp>
#include <optional>
#include "LolLicenseAgreementLicenseAgreementType.hpp"
namespace leagueapi {
  struct LolLicenseAgreementLicenseAgreement_t {
    std::string id;
    LolLicenseAgreementLicenseAgreementType_t licenseType;
    std::string text;
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreement_t& v) {
    j["id"] = v.id;
    j["licenseType"] = v.licenseType;
    j["text"] = v.text;
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreement_t& v) {
    v.id = j.at("id").get<std::string>();
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType_t>();
    v.text = j.at("text").get<std::string>();
  }
}
