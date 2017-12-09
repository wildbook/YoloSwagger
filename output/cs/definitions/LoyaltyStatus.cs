using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LoyaltyStatus {
    [DataMember(Name = "CHANGE")]
    CHANGE = 3,

    [DataMember(Name = "DISABLED")]
    DISABLED = 5,

    [DataMember(Name = "EXPIRY")]
    EXPIRY = 2,

    [DataMember(Name = "LEGACY")]
    LEGACY = 0,

    [DataMember(Name = "REVOKE")]
    REVOKE = 4,

    [DataMember(Name = "REWARDS_GRANT")]
    REWARDS_GRANT = 1,

  }
}