using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum ClubPermission {
    [DataMember(Name = "DEMOTE")]
    DEMOTE = 2,

    [DataMember(Name = "INVITE")]
    INVITE = 0,

    [DataMember(Name = "KICK_MEMBER")]
    KICK_MEMBER = 3,

    [DataMember(Name = "KICK_OFFICER")]
    KICK_OFFICER = 4,

    [DataMember(Name = "NOMINATE")]
    NOMINATE = 6,

    [DataMember(Name = "OWNERSHIP_TRANSFER")]
    OWNERSHIP_TRANSFER = 5,

    [DataMember(Name = "PROMOTE")]
    PROMOTE = 1,

    [DataMember(Name = "SET_DESCRIPTION")]
    SET_DESCRIPTION = 8,

    [DataMember(Name = "SET_MOTD")]
    SET_MOTD = 7,

  }
}