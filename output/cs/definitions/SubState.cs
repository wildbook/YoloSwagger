using System.Runtime.Serialization;
namespace leagueapi {
  enum SubState {
    [DataMember(Name = "SUGGESTED")]
    SUGGESTED = 0,

    [DataMember(Name = "REVOKED")]
    REVOKED = 3,

    [DataMember(Name = "NOT_READY")]
    NOT_READY = 4,

    [DataMember(Name = "DECLINED")]
    DECLINED = 2,

    [DataMember(Name = "READY")]
    READY = 6,

    [DataMember(Name = "FORCED_NOT_READY")]
    FORCED_NOT_READY = 5,

    [DataMember(Name = "PENDING")]
    PENDING = 1,

  }
}