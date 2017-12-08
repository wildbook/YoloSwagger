#pragma once
#include <json.hpp>
#include <optional>
#include "LolLicenseAgreementLicenseAgreementType.hpp"
namespace leagueapi {
  struct LolLicenseAgreementLicenseAgreement_t {
    std::string_t text;
    LolLicenseAgreementLicenseAgreementType_t licenseType;
    std::string_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreement_t& v) {
    j["text"] = v.text;
    j["licenseType"] = v.licenseType;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreement_t& v) {
    v.text = j.at("text").get<std::string_t>();
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType_t>();
    v.id = j.at("id").get<std::string_t>();
  }
  inline std::string to_string(const LolLicenseAgreementLicenseAgreement_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
