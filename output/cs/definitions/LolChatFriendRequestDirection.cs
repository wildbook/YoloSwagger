using System.Runtime.Serialization;
namespace leagueapi {
  enum LolChatFriendRequestDirection {
    [DataMember(Name = "both")]
    Both = 2,

    [DataMember(Name = "out")]
    Out = 1,

    [DataMember(Name = "in")]
    In = 0,

  }
}