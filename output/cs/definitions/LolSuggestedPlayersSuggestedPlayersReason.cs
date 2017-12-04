using System.Runtime.Serialization;
namespace leagueapi {
  enum LolSuggestedPlayersSuggestedPlayersReason {
    [DataMember(Name = "OnlineFriend")]
    OnlineFriend = 2,

    [DataMember(Name = "LegacyPlayAgain")]
    LegacyPlayAgain = 9999,

    [DataMember(Name = "FriendOfFriend")]
    FriendOfFriend = 3,

    [DataMember(Name = "PreviousPremade")]
    PreviousPremade = 1,

    [DataMember(Name = "VictoriousComrade")]
    VictoriousComrade = 5,

  }
}