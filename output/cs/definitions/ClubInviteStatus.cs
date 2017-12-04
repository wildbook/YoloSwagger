using System.Runtime.Serialization;
namespace leagueapi {
  enum ClubInviteStatus {
    [DataMember(Name = "ACCEPTED")]
    ACCEPTED = 1,

    [DataMember(Name = "REJECTED")]
    REJECTED = 2,

    [DataMember(Name = "PENDING")]
    PENDING = 0,

    [DataMember(Name = "BLOCKED")]
    BLOCKED = 3,

  }
}