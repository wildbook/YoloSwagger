#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLicenseAgreementLicenseAgreementType_t {
    TermsOfUse_E = 1,
    Eula_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreementType_t& v) {
    switch(v) {
      case LolLicenseAgreementLicenseAgreementType_t::TermsOfUse_E:
        j = "TermsOfUse";
      break;
      case LolLicenseAgreementLicenseAgreementType_t::Eula_E:
        j = "Eula";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreementType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "TermsOfUse"){
      v = LolLicenseAgreementLicenseAgreementType_t::TermsOfUse_E;
      return;
    }
    if(s == "Eula"){
      v = LolLicenseAgreementLicenseAgreementType_t::Eula_E;
      return;
    }
  }
  inline std::string to_string(const LolLicenseAgreementLicenseAgreementType_t& v) {
    switch(v) {
      case LolLicenseAgreementLicenseAgreementType_t::TermsOfUse_E:
        return "TermsOfUse";
      case LolLicenseAgreementLicenseAgreementType_t::Eula_E:
        return "Eula";
    }
  }

}
