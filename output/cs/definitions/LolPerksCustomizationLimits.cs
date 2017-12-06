using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolPerksCustomizationLimits {
    [DataMember(Name = "CanSelectKeystones")]
    CanSelectKeystones = 2,

    [DataMember(Name = "CanSelectPages")]
    CanSelectPages = 1,

    [DataMember(Name = "CanSelectPrimaries")]
    CanSelectPrimaries = 4,

    [DataMember(Name = "CanSelectSplash")]
    CanSelectSplash = 8,

    [DataMember(Name = "CanUseAdvancedStyles")]
    CanUseAdvancedStyles = 16,

    [DataMember(Name = "Locked")]
    Locked = 0,

  }
}