#ifndef SWAGGER_TYPES_LolLicenseAgreementLicenseAgreement_HPP
#define SWAGGER_TYPES_LolLicenseAgreementLicenseAgreement_HPP
#include <json.hpp>
#include "LolLicenseAgreementLicenseAgreementType.hpp"
namespace test {
  // 
  struct LolLicenseAgreementLicenseAgreement {
'    // 
    std::string id;
    // 
    LolLicenseAgreementLicenseAgreementType licenseType;
    // 
    std::string text;
  };

  void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreement& v) {
    j["id"] = v.id;
    j["licenseType"] = v.licenseType;
    j["text"] = v.text;
  }

  void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreement& v) {
    v.id = j.at("id").get<std::string>;
    v.licenseType = j.at("licenseType").get<LolLicenseAgreementLicenseAgreementType>;
    v.text = j.at("text").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLicenseAgreementLicenseAgreement_HPP
