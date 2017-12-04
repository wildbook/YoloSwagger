using System.Runtime.Serialization;
namespace leagueapi {
  enum LCDSLoyaltyStateChangeNotificationCategory {
    [DataMember(Name = "revoke")]
    Revoke = 4,

    [DataMember(Name = "grant")]
    Grant = 1,

    [DataMember(Name = "expiry")]
    Expiry = 2,

    [DataMember(Name = "disabled")]
    Disabled = 5,

    [DataMember(Name = "legacy")]
    Legacy = 0,

    [DataMember(Name = "change")]
    Change = 3,

  }
}