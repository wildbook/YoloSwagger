using System.Runtime.Serialization;
namespace leagueapi {
  enum LcdsInvitationState {
    [DataMember(Name = "ACTIVE")]
    ACTIVE = 0,

    [DataMember(Name = "REVOKED")]
    REVOKED = 2,

    [DataMember(Name = "ON_HOLD")]
    ON_HOLD = 1,

  }
}