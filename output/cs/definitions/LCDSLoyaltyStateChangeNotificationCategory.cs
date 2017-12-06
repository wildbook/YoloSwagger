using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LCDSLoyaltyStateChangeNotificationCategory {
    [DataMember(Name = "change")]
    Change = 3,

    [DataMember(Name = "disabled")]
    Disabled = 5,

    [DataMember(Name = "expiry")]
    Expiry = 2,

    [DataMember(Name = "grant")]
    Grant = 1,

    [DataMember(Name = "legacy")]
    Legacy = 0,

    [DataMember(Name = "revoke")]
    Revoke = 4,

  }
}