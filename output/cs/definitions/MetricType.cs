using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum MetricType {
    [DataMember(Name = "count")]
    Count = 2,

    [DataMember(Name = "duration")]
    Duration = 3,

    [DataMember(Name = "percentage")]
    Percentage = 1,

    [DataMember(Name = "rate")]
    Rate = 4,

    [DataMember(Name = "unknown")]
    Unknown = 0,

  }
}