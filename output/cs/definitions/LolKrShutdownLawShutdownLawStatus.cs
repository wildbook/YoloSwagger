using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolKrShutdownLawShutdownLawStatus {
    [DataMember(Name = "CUT_OFF")]
    CUT_OFF = 2,

    [DataMember(Name = "NONE")]
    NONE = 0,

    [DataMember(Name = "WARNING")]
    WARNING = 1,

  }
}