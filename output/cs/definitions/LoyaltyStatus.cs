using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LoyaltyStatus {
    [DataMember(Name = "REVOKE")]
    REVOKE = 4,

    [DataMember(Name = "EXPIRY")]
    EXPIRY = 2,

    [DataMember(Name = "DISABLED")]
    DISABLED = 5,

    [DataMember(Name = "LEGACY")]
    LEGACY = 0,

    [DataMember(Name = "REWARDS_GRANT")]
    REWARDS_GRANT = 1,

    [DataMember(Name = "CHANGE")]
    CHANGE = 3,

  }
}