using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum ClashRewardType {
    [DataMember(Name = "FLAG")]
    FLAG = 1,

    [DataMember(Name = "FRAME")]
    FRAME = 2,

    [DataMember(Name = "LOGO")]
    LOGO = 3,

    [DataMember(Name = "LOOT")]
    LOOT = 4,

    [DataMember(Name = "TROPHY")]
    TROPHY = 0,

    [DataMember(Name = "VP")]
    VP = 5,

  }
}