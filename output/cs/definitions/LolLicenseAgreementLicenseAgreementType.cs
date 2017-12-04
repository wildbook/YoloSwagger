using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLicenseAgreementLicenseAgreementType {
    [DataMember(Name = "TermsOfUse")]
    TermsOfUse = 1,

    [DataMember(Name = "Eula")]
    Eula = 0,

  }
}