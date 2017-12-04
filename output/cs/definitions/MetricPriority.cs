using System.Runtime.Serialization;
namespace leagueapi {
  enum MetricPriority {
    [DataMember(Name = "high")]
    High = 2,

    [DataMember(Name = "medium")]
    Medium = 1,

    [DataMember(Name = "low")]
    Low = 0,

  }
}