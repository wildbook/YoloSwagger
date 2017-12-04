using System.Runtime.Serialization;
namespace leagueapi {
  enum PendingRosterInviteeState {
    [DataMember(Name = "SUGGESTED")]
    SUGGESTED = 0,

    [DataMember(Name = "PENDING")]
    PENDING = 1,

    [DataMember(Name = "DECLINED")]
    DECLINED = 2,

    [DataMember(Name = "REVOKED")]
    REVOKED = 3,

  }
}