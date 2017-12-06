using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLeaguesMiniseries {
    [DataMember(Name = "L")]
    L = 1,

    [DataMember(Name = "N")]
    N = 2,

    [DataMember(Name = "W")]
    W = 0,

  }
}