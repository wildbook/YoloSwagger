using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolMatchmakingMatchmakingReadyCheckState {
    [DataMember(Name = "Error")]
    Error = 5,

    [DataMember(Name = "EveryoneReady")]
    EveryoneReady = 2,

    [DataMember(Name = "InProgress")]
    InProgress = 1,

    [DataMember(Name = "Invalid")]
    Invalid = 0,

    [DataMember(Name = "PartyNotReady")]
    PartyNotReady = 4,

    [DataMember(Name = "StrangerNotReady")]
    StrangerNotReady = 3,

  }
}