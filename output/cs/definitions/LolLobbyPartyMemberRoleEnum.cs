using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLobbyPartyMemberRoleEnum {
    [DataMember(Name = "KICKED")]
    KICKED = 4,

    [DataMember(Name = "INVITED")]
    INVITED = 2,

    [DataMember(Name = "MEMBER")]
    MEMBER = 1,

    [DataMember(Name = "HOLD")]
    HOLD = 3,

    [DataMember(Name = "LEADER")]
    LEADER = 0,

    [DataMember(Name = "DECLINED")]
    DECLINED = 5,

  }
}