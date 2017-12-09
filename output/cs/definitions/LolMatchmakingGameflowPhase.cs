using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolMatchmakingGameflowPhase {
    [DataMember(Name = "ChampSelect")]
    ChampSelect = 5,

    [DataMember(Name = "CheckedIntoTournament")]
    CheckedIntoTournament = 3,

    [DataMember(Name = "EndOfGame")]
    EndOfGame = 12,

    [DataMember(Name = "FailedToLaunch")]
    FailedToLaunch = 7,

    [DataMember(Name = "GameStart")]
    GameStart = 6,

    [DataMember(Name = "InProgress")]
    InProgress = 8,

    [DataMember(Name = "Lobby")]
    Lobby = 1,

    [DataMember(Name = "Matchmaking")]
    Matchmaking = 2,

    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "PreEndOfGame")]
    PreEndOfGame = 11,

    [DataMember(Name = "ReadyCheck")]
    ReadyCheck = 4,

    [DataMember(Name = "Reconnect")]
    Reconnect = 9,

    [DataMember(Name = "TerminatedInError")]
    TerminatedInError = 13,

    [DataMember(Name = "WaitingForStats")]
    WaitingForStats = 10,

  }
}