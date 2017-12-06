using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLeaguesSeverity {
    [DataMember(Name = "ALERT")]
    ALERT = 1,

    [DataMember(Name = "WARNING")]
    WARNING = 0,

  }
}