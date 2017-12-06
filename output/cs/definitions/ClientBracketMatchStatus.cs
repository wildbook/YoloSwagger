using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum ClientBracketMatchStatus {
    [DataMember(Name = "COMPLETED")]
    COMPLETED = 2,

    [DataMember(Name = "STARTED")]
    STARTED = 1,

    [DataMember(Name = "UPCOMING")]
    UPCOMING = 0,

  }
}