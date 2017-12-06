using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LcdsInviteeState {
    [DataMember(Name = "ACCEPTED")]
    ACCEPTED = 3,

    [DataMember(Name = "ACCEPT_FAILED")]
    ACCEPT_FAILED = 4,

    [DataMember(Name = "BANNED")]
    BANNED = 8,

    [DataMember(Name = "CREATOR")]
    CREATOR = 0,

    [DataMember(Name = "DECLINED")]
    DECLINED = 2,

    [DataMember(Name = "JOINED")]
    JOINED = 5,

    [DataMember(Name = "KICKED")]
    KICKED = 7,

    [DataMember(Name = "PENDING")]
    PENDING = 1,

    [DataMember(Name = "QUIT")]
    QUIT = 6,

  }
}