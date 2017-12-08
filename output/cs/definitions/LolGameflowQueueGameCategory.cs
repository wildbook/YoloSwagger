using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolGameflowQueueGameCategory {
    [DataMember(Name = "VersusAi")]
    VersusAi = 3,

    [DataMember(Name = "PvP")]
    PvP = 2,

    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "Custom")]
    Custom = 1,

  }
}