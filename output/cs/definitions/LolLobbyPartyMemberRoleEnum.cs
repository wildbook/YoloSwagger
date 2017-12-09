using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLobbyPartyMemberRoleEnum {
    [DataMember(Name = "DECLINED")]
    DECLINED = 5,

    [DataMember(Name = "HOLD")]
    HOLD = 3,

    [DataMember(Name = "INVITED")]
    INVITED = 2,

    [DataMember(Name = "KICKED")]
    KICKED = 4,

    [DataMember(Name = "LEADER")]
    LEADER = 0,

    [DataMember(Name = "MEMBER")]
    MEMBER = 1,

  }
}