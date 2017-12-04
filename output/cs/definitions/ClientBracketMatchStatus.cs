using System.Runtime.Serialization;
namespace leagueapi {
  enum ClientBracketMatchStatus {
    [DataMember(Name = "STARTED")]
    STARTED = 1,

    [DataMember(Name = "COMPLETED")]
    COMPLETED = 2,

    [DataMember(Name = "UPCOMING")]
    UPCOMING = 0,

  }
}