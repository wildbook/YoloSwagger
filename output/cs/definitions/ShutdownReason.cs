using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum ShutdownReason {
    [DataMember(Name = "Invalid")]
    Invalid = 0,

    [DataMember(Name = "LcuAlphaDisabled")]
    LcuAlphaDisabled = 2,

    [DataMember(Name = "PlatformMaintenance")]
    PlatformMaintenance = 1,

    [DataMember(Name = "PlayerBanned")]
    PlayerBanned = 3,

  }
}