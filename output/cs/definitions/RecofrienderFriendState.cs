using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum RecofrienderFriendState {
    [DataMember(Name = "BLOCKED")]
    BLOCKED = 2,

    [DataMember(Name = "FRIEND")]
    FRIEND = 1,

    [DataMember(Name = "NONE")]
    NONE = 0,

  }
}