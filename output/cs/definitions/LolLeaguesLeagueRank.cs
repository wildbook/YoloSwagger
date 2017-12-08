using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLeaguesLeagueRank {
    [DataMember(Name = "I")]
    I = 0,

    [DataMember(Name = "NA")]
    NA = 5,

    [DataMember(Name = "IV")]
    IV = 3,

    [DataMember(Name = "II")]
    II = 1,

    [DataMember(Name = "V")]
    V = 4,

    [DataMember(Name = "III")]
    III = 2,

  }
}