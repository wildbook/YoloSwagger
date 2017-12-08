using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolMatchmakingQueueCustomGameSpectatorPolicy {
    [DataMember(Name = "FriendsAllowed")]
    FriendsAllowed = 2,

    [DataMember(Name = "LobbyAllowed")]
    LobbyAllowed = 1,

    [DataMember(Name = "AllAllowed")]
    AllAllowed = 3,

    [DataMember(Name = "NotAllowed")]
    NotAllowed = 0,

  }
}