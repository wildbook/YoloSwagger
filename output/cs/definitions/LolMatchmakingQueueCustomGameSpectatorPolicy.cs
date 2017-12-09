using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolMatchmakingQueueCustomGameSpectatorPolicy {
    [DataMember(Name = "AllAllowed")]
    AllAllowed = 3,

    [DataMember(Name = "FriendsAllowed")]
    FriendsAllowed = 2,

    [DataMember(Name = "LobbyAllowed")]
    LobbyAllowed = 1,

    [DataMember(Name = "NotAllowed")]
    NotAllowed = 0,

  }
}