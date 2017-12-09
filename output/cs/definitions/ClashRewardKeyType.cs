using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum ClashRewardKeyType {
    [DataMember(Name = "CUP")]
    CUP = 1,

    [DataMember(Name = "LOWEST_POSITION")]
    LOWEST_POSITION = 3,

    [DataMember(Name = "SEASON_FLAG_COUNT")]
    SEASON_FLAG_COUNT = 7,

    [DataMember(Name = "SEASON_VP")]
    SEASON_VP = 6,

    [DataMember(Name = "THEME_VP")]
    THEME_VP = 5,

    [DataMember(Name = "TIER")]
    TIER = 0,

    [DataMember(Name = "TOKENS")]
    TOKENS = 2,

    [DataMember(Name = "WINS")]
    WINS = 4,

  }
}