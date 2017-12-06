using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLicenseAgreementLicenseAgreementType {
    [DataMember(Name = "Eula")]
    Eula = 0,

    [DataMember(Name = "TermsOfUse")]
    TermsOfUse = 1,

  }
}