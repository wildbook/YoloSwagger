using System.Runtime.Serialization;
namespace leagueapi {
  enum LolPerksCustomizationLimits {
    [DataMember(Name = "CanSelectSplash")]
    CanSelectSplash = 8,

    [DataMember(Name = "CanUseAdvancedStyles")]
    CanUseAdvancedStyles = 16,

    [DataMember(Name = "Locked")]
    Locked = 0,

    [DataMember(Name = "CanSelectPrimaries")]
    CanSelectPrimaries = 4,

    [DataMember(Name = "CanSelectPages")]
    CanSelectPages = 1,

    [DataMember(Name = "CanSelectKeystones")]
    CanSelectKeystones = 2,

  }
}