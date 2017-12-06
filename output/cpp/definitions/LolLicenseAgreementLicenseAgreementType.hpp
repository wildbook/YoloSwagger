#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLicenseAgreementLicenseAgreementType_t {
    Eula_E = 0,
    TermsOfUse_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLicenseAgreementLicenseAgreementType_t& v) {
    switch(v) {
      case LolLicenseAgreementLicenseAgreementType_t::Eula_E:
        j = "Eula";
      break;
      case LolLicenseAgreementLicenseAgreementType_t::TermsOfUse_E:
        j = "TermsOfUse";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLicenseAgreementLicenseAgreementType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Eula"){
      v = LolLicenseAgreementLicenseAgreementType_t::Eula_E;
      return;
    }
    if(s == "TermsOfUse"){
      v = LolLicenseAgreementLicenseAgreementType_t::TermsOfUse_E;
      return;
    }
  }
}
