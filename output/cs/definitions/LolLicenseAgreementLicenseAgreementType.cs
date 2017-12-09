using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLicenseAgreementLicenseAgreementType {
    [DataMember(Name = "Eula")]
    Eula = 0,

    [DataMember(Name = "TermsOfUse")]
    TermsOfUse = 1,

  }
}