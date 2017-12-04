using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLobbyLobbyMatchmakingSearchState {
    [DataMember(Name = "ServiceShutdown")]
    ServiceShutdown = 7,

    [DataMember(Name = "Searching")]
    Searching = 3,

    [DataMember(Name = "Invalid")]
    Invalid = 0,

    [DataMember(Name = "Canceled")]
    Canceled = 2,

    [DataMember(Name = "ServiceError")]
    ServiceError = 6,

    [DataMember(Name = "AbandonedLowPriorityQueue")]
    AbandonedLowPriorityQueue = 1,

    [DataMember(Name = "Error")]
    Error = 5,

    [DataMember(Name = "Found")]
    Found = 4,

  }
}