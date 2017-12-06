using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLobbyPlayerUpdateType {
    [DataMember(Name = "Direct")]
    Direct = 1,

    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "RMS")]
    RMS = 3,

    [DataMember(Name = "ServiceProxy")]
    ServiceProxy = 2,

  }
}