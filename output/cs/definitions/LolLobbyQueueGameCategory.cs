using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLobbyQueueGameCategory {
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