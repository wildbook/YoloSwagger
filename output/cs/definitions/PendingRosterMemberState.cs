using System.Runtime.Serialization;
namespace leagueapi {
  enum PendingRosterMemberState {
    [DataMember(Name = "READY")]
    READY = 2,

    [DataMember(Name = "FORCED_NOT_READY")]
    FORCED_NOT_READY = 1,

    [DataMember(Name = "NOT_READY")]
    NOT_READY = 0,

    [DataMember(Name = "KICK")]
    KICK = 4,

    [DataMember(Name = "LEFT")]
    LEFT = 3,

  }
}