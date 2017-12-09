using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum MetricPriority {
    [DataMember(Name = "high")]
    High = 2,

    [DataMember(Name = "low")]
    Low = 0,

    [DataMember(Name = "medium")]
    Medium = 1,

  }
}