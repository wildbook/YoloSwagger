using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum RankedDivision {
    [DataMember(Name = "I")]
    I = 1,

    [DataMember(Name = "II")]
    II = 2,

    [DataMember(Name = "V")]
    V = 5,

    [DataMember(Name = "III")]
    III = 3,

    [DataMember(Name = "IV")]
    IV = 4,

  }
}