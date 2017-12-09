using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolReplaysGameflowWatchPhase {
    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "WatchFailedToLaunch")]
    WatchFailedToLaunch = 3,

    [DataMember(Name = "WatchInProgress")]
    WatchInProgress = 2,

    [DataMember(Name = "WatchStarted")]
    WatchStarted = 1,

  }
}