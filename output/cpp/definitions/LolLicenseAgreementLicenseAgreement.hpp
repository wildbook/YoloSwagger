#pragma once
#include <json.hpp>
#include <optional>
#include "LolLicenseAgreementLicenseAgreementType.hpp"
namespace leagueapi {
  struct LolLicenseAgreementLicenseAgreement_t {
    std::string id;
    std::string text;
    LolLicenseAgreementLicenseAgreementType_t licenseType;
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreement_t& v) {
    j["id"] = v.id;
    j["text"] = v.text;
    j["licenseType"] = v.licenseType;
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreement_t& v) {
    v.id = j.at("id").get<std::string>();
    v.text = j.at("text").get<std::string>();
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType_t>();
  }
  inline std::string to_string(const LolLicenseAgreementLicenseAgreement_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
