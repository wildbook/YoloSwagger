using System.Runtime.Serialization;
namespace leagueapi {
  enum ShutdownReason {
    [DataMember(Name = "LcuAlphaDisabled")]
    LcuAlphaDisabled = 2,

    [DataMember(Name = "PlatformMaintenance")]
    PlatformMaintenance = 1,

    [DataMember(Name = "Invalid")]
    Invalid = 0,

    [DataMember(Name = "PlayerBanned")]
    PlayerBanned = 3,

  }
}