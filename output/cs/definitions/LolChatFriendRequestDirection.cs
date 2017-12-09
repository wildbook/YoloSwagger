using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolChatFriendRequestDirection {
    [DataMember(Name = "both")]
    Both = 2,

    [DataMember(Name = "in")]
    In = 0,

    [DataMember(Name = "out")]
    Out = 1,

  }
}