#pragma once
#include <json.hpp>
#include <optional>
#include "LolLicenseAgreementLicenseAgreementType.hpp"
namespace leagueapi {
  struct LolLicenseAgreementLicenseAgreement_t {
    LolLicenseAgreementLicenseAgreementType_t licenseType;
    std::string id;
    std::string text;
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreement_t& v) {
    j["licenseType"] = v.licenseType;
    j["id"] = v.id;
    j["text"] = v.text;
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreement_t& v) {
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType_t>();
    v.id = j.at("id").get<std::string>();
    v.text = j.at("text").get<std::string>();
  }
  inline std::string to_string(const LolLicenseAgreementLicenseAgreement_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
