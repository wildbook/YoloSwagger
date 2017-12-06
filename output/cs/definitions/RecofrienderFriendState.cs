using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum RecofrienderFriendState {
    [DataMember(Name = "BLOCKED")]
    BLOCKED = 2,

    [DataMember(Name = "FRIEND")]
    FRIEND = 1,

    [DataMember(Name = "NONE")]
    NONE = 0,

  }
}