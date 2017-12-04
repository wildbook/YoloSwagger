using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLobbyTeamBuilderMatchmakingReadyCheckState {
    [DataMember(Name = "PartyNotReady")]
    PartyNotReady = 4,

    [DataMember(Name = "StrangerNotReady")]
    StrangerNotReady = 3,

    [DataMember(Name = "EveryoneReady")]
    EveryoneReady = 2,

    [DataMember(Name = "Invalid")]
    Invalid = 0,

    [DataMember(Name = "Error")]
    Error = 5,

    [DataMember(Name = "InProgress")]
    InProgress = 1,

  }
}