using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLobbyPlayerUpdateType {
    [DataMember(Name = "RMS")]
    RMS = 3,

    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "ServiceProxy")]
    ServiceProxy = 2,

    [DataMember(Name = "Direct")]
    Direct = 1,

  }
}