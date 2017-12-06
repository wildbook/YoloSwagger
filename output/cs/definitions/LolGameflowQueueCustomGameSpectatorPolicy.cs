using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolGameflowQueueCustomGameSpectatorPolicy {
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