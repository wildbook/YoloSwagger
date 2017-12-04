#ifndef SWAGGER_TYPES_LolLicenseAgreementLicenseAgreementType_HPP
#define SWAGGER_TYPES_LolLicenseAgreementLicenseAgreementType_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLicenseAgreementLicenseAgreementType {
'    // 
    Eula = 0,
    // 
    TermsOfUse = 1,
  };

  void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreementType& v) {
    switch(v) {
      case LolLicenseAgreementLicenseAgreementType::Eula:
        j = "Eula";
      break;
      case LolLicenseAgreementLicenseAgreementType::TermsOfUse:
        j = "TermsOfUse";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreementType& v) {
    const auto s& = j.get<std::string>();
    if(s == "Eula"){
      v = LolLicenseAgreementLicenseAgreementType::Eula;
      return;
    }
    if(s == "TermsOfUse"){
      v = LolLicenseAgreementLicenseAgreementType::TermsOfUse;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLicenseAgreementLicenseAgreementType_HPP
