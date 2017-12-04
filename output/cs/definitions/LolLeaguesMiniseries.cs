using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLeaguesMiniseries {
    [DataMember(Name = "L")]
    L = 1,

    [DataMember(Name = "W")]
    W = 0,

    [DataMember(Name = "N")]
    N = 2,

  }
}