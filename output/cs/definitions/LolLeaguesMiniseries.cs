using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLeaguesMiniseries {
    [DataMember(Name = "L")]
    L = 1,

    [DataMember(Name = "N")]
    N = 2,

    [DataMember(Name = "W")]
    W = 0,

  }
}