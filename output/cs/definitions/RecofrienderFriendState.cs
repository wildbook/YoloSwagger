using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum RecofrienderFriendState {
    [DataMember(Name = "NONE")]
    NONE = 0,

    [DataMember(Name = "FRIEND")]
    FRIEND = 1,

    [DataMember(Name = "BLOCKED")]
    BLOCKED = 2,

  }
}