using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum ClubRole {
    [DataMember(Name = "INVITEE")]
    INVITEE = 4,

    [DataMember(Name = "MEMBER")]
    MEMBER = 3,

    [DataMember(Name = "NOMINEE")]
    NOMINEE = 5,

    [DataMember(Name = "OFFICER")]
    OFFICER = 2,

    [DataMember(Name = "OWNER")]
    OWNER = 1,

    [DataMember(Name = "UNKNOWN")]
    UNKNOWN = 0,

  }
}