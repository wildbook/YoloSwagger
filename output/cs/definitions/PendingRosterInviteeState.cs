using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum PendingRosterInviteeState {
    [DataMember(Name = "DECLINED")]
    DECLINED = 2,

    [DataMember(Name = "PENDING")]
    PENDING = 1,

    [DataMember(Name = "REVOKED")]
    REVOKED = 3,

    [DataMember(Name = "SUGGESTED")]
    SUGGESTED = 0,

  }
}