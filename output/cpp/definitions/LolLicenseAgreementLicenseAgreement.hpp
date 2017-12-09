#pragma once
#include <json.hpp>
#include <optional>
#include "LolLicenseAgreementLicenseAgreementType.hpp"
namespace leagueapi {
  struct LolLicenseAgreementLicenseAgreement_t {
    LolLicenseAgreementLicenseAgreementType_t licenseType;
    std::string text;
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreement_t& v) {
    j["licenseType"] = v.licenseType;
    j["text"] = v.text;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreement_t& v) {
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType_t>();
    v.text = j.at("text").get<std::string>();
    v.id = j.at("id").get<std::string>();
  }
  inline std::string to_string(const LolLicenseAgreementLicenseAgreement_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
