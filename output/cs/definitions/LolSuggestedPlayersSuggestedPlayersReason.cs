using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolSuggestedPlayersSuggestedPlayersReason {
    [DataMember(Name = "FriendOfFriend")]
    FriendOfFriend = 3,

    [DataMember(Name = "LegacyPlayAgain")]
    LegacyPlayAgain = 9999,

    [DataMember(Name = "OnlineFriend")]
    OnlineFriend = 2,

    [DataMember(Name = "PreviousPremade")]
    PreviousPremade = 1,

    [DataMember(Name = "VictoriousComrade")]
    VictoriousComrade = 5,

  }
}