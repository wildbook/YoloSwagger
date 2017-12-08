using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LcdsInviteeState {
    [DataMember(Name = "QUIT")]
    QUIT = 6,

    [DataMember(Name = "KICKED")]
    KICKED = 7,

    [DataMember(Name = "CREATOR")]
    CREATOR = 0,

    [DataMember(Name = "BANNED")]
    BANNED = 8,

    [DataMember(Name = "JOINED")]
    JOINED = 5,

    [DataMember(Name = "ACCEPT_FAILED")]
    ACCEPT_FAILED = 4,

    [DataMember(Name = "PENDING")]
    PENDING = 1,

    [DataMember(Name = "ACCEPTED")]
    ACCEPTED = 3,

    [DataMember(Name = "DECLINED")]
    DECLINED = 2,

  }
}