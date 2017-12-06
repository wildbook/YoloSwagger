using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LcdsInvitationState {
    [DataMember(Name = "ACTIVE")]
    ACTIVE = 0,

    [DataMember(Name = "ON_HOLD")]
    ON_HOLD = 1,

    [DataMember(Name = "REVOKED")]
    REVOKED = 2,

  }
}