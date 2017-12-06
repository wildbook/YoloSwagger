using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum SubState {
    [DataMember(Name = "DECLINED")]
    DECLINED = 2,

    [DataMember(Name = "FORCED_NOT_READY")]
    FORCED_NOT_READY = 5,

    [DataMember(Name = "NOT_READY")]
    NOT_READY = 4,

    [DataMember(Name = "PENDING")]
    PENDING = 1,

    [DataMember(Name = "READY")]
    READY = 6,

    [DataMember(Name = "REVOKED")]
    REVOKED = 3,

    [DataMember(Name = "SUGGESTED")]
    SUGGESTED = 0,

  }
}