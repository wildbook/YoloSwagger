using System.Runtime.Serialization;
namespace leagueapi {
  enum ClashRewardKeyType {
    [DataMember(Name = "TOKENS")]
    TOKENS = 2,

    [DataMember(Name = "LOWEST_POSITION")]
    LOWEST_POSITION = 3,

    [DataMember(Name = "CUP")]
    CUP = 1,

    [DataMember(Name = "WINS")]
    WINS = 4,

    [DataMember(Name = "THEME_VP")]
    THEME_VP = 5,

    [DataMember(Name = "TIER")]
    TIER = 0,

    [DataMember(Name = "SEASON_VP")]
    SEASON_VP = 6,

    [DataMember(Name = "SEASON_FLAG_COUNT")]
    SEASON_FLAG_COUNT = 7,

  }
}