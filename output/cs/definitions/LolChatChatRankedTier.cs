using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolChatChatRankedTier {
    [DataMember(Name = "BRONZE")]
    BRONZE = 2,

    [DataMember(Name = "CHALLENGER")]
    CHALLENGER = 8,

    [DataMember(Name = "DIAMOND")]
    DIAMOND = 6,

    [DataMember(Name = "GOLD")]
    GOLD = 4,

    [DataMember(Name = "MASTER")]
    MASTER = 7,

    [DataMember(Name = "NOT_RANKED")]
    NOT_RANKED = 0,

    [DataMember(Name = "PLATINUM")]
    PLATINUM = 5,

    [DataMember(Name = "PROVISIONAL")]
    PROVISIONAL = 1,

    [DataMember(Name = "SILVER")]
    SILVER = 3,

  }
}