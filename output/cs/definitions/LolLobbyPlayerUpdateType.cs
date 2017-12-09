using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLobbyPlayerUpdateType {
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