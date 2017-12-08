using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLeaguesLeagueTier {
    [DataMember(Name = "PLATINUM")]
    PLATINUM = 4,

    [DataMember(Name = "NONE")]
    NONE = 0,

    [DataMember(Name = "DIAMOND")]
    DIAMOND = 5,

    [DataMember(Name = "GOLD")]
    GOLD = 3,

    [DataMember(Name = "CHALLENGER")]
    CHALLENGER = 7,

    [DataMember(Name = "MASTER")]
    MASTER = 6,

    [DataMember(Name = "SILVER")]
    SILVER = 2,

    [DataMember(Name = "BRONZE")]
    BRONZE = 1,

  }
}