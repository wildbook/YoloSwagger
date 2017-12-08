using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolReplaysGameflowWatchPhase {
    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "WatchStarted")]
    WatchStarted = 1,

    [DataMember(Name = "WatchInProgress")]
    WatchInProgress = 2,

    [DataMember(Name = "WatchFailedToLaunch")]
    WatchFailedToLaunch = 3,

  }
}