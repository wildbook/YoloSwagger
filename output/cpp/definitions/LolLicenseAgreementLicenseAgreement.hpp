#ifndef SWAGGER_TYPES_LolLicenseAgreementLicenseAgreement_HPP
#define SWAGGER_TYPES_LolLicenseAgreementLicenseAgreement_HPP
#include <json.hpp>
#include "LolLicenseAgreementLicenseAgreementType.hpp"
namespace leagueapi {
  // 
  struct LolLicenseAgreementLicenseAgreement {
    // 
    std::string text;
    // 
    LolLicenseAgreementLicenseAgreementType licenseType;
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreement& v) {
    j["text"] = v.text;
    j["licenseType"] = v.licenseType;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreement& v) {
    v.text = j.at("text").get<std::string>;
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLicenseAgreementLicenseAgreement_HPP
