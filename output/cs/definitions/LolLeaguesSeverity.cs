using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLeaguesSeverity {
    [DataMember(Name = "WARNING")]
    WARNING = 0,

    [DataMember(Name = "ALERT")]
    ALERT = 1,

  }
}