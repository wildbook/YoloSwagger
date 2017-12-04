using System.Runtime.Serialization;
namespace leagueapi {
  enum LolChatChatRankedTier {
    [DataMember(Name = "PLATINUM")]
    PLATINUM = 5,

    [DataMember(Name = "DIAMOND")]
    DIAMOND = 6,

    [DataMember(Name = "NOT_RANKED")]
    NOT_RANKED = 0,

    [DataMember(Name = "GOLD")]
    GOLD = 4,

    [DataMember(Name = "SILVER")]
    SILVER = 3,

    [DataMember(Name = "CHALLENGER")]
    CHALLENGER = 8,

    [DataMember(Name = "MASTER")]
    MASTER = 7,

    [DataMember(Name = "PROVISIONAL")]
    PROVISIONAL = 1,

    [DataMember(Name = "BRONZE")]
    BRONZE = 2,

  }
}