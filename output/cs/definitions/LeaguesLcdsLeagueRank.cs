using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LeaguesLcdsLeagueRank {
    [DataMember(Name = "I")]
    I = 0,

    [DataMember(Name = "II")]
    II = 1,

    [DataMember(Name = "III")]
    III = 2,

    [DataMember(Name = "IV")]
    IV = 3,

    [DataMember(Name = "V")]
    V = 4,

  }
}