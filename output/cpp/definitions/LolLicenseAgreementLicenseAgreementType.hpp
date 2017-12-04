#ifndef SWAGGER_TYPES_LolLicenseAgreementLicenseAgreementType_HPP
#define SWAGGER_TYPES_LolLicenseAgreementLicenseAgreementType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLicenseAgreementLicenseAgreementType {
    // 
    TermsOfUse = 1,
    // 
    Eula = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreementType& v) {
    switch(v) {
      case LolLicenseAgreementLicenseAgreementType::TermsOfUse:
        j = "TermsOfUse";
      break;
      case LolLicenseAgreementLicenseAgreementType::Eula:
        j = "Eula";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreementType& v) {
    const auto& s = j.get<std::string>();
    if(s == "TermsOfUse"){
      v = LolLicenseAgreementLicenseAgreementType::TermsOfUse;
      return;
    }
    if(s == "Eula"){
      v = LolLicenseAgreementLicenseAgreementType::Eula;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLicenseAgreementLicenseAgreementType_HPP
