using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolFeaturedModesGameflowAvailabilityState {
    [DataMember(Name = "Available")]
    Available = 0,

    [DataMember(Name = "InGameFlow")]
    InGameFlow = 4,

    [DataMember(Name = "Patching")]
    Patching = 2,

    [DataMember(Name = "PlayerBanned")]
    PlayerBanned = 3,

    [DataMember(Name = "Initializing")]
    Initializing = 1,

    [DataMember(Name = "Configuration")]
    Configuration = 5,

  }
}