using System.Runtime.Serialization;
namespace leagueapi {
  enum LolClashPresenceState {
    [DataMember(Name = "LOCKED_IN")]
    LOCKED_IN = 1,

    [DataMember(Name = "NONE")]
    NONE = 0,

    [DataMember(Name = "SCOUTING")]
    SCOUTING = 2,

  }
}