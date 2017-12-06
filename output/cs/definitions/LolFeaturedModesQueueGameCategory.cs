using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolFeaturedModesQueueGameCategory {
    [DataMember(Name = "Custom")]
    Custom = 1,

    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "PvP")]
    PvP = 2,

    [DataMember(Name = "VersusAi")]
    VersusAi = 3,

  }
}