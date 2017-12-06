using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum ClubInviteStatus {
    [DataMember(Name = "ACCEPTED")]
    ACCEPTED = 1,

    [DataMember(Name = "BLOCKED")]
    BLOCKED = 3,

    [DataMember(Name = "PENDING")]
    PENDING = 0,

    [DataMember(Name = "REJECTED")]
    REJECTED = 2,

  }
}