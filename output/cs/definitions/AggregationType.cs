using System.Runtime.Serialization;
namespace leagueapi {
  enum AggregationType {
    [DataMember(Name = "average")]
    Average = 2,

    [DataMember(Name = "none")]
    None = 0,

    [DataMember(Name = "sum")]
    Sum = 1,

  }
}