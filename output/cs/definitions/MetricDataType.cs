using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum MetricDataType {
    [DataMember(Name = "bool")]
    Bool = 4,

    [DataMember(Name = "float")]
    Float = 3,

    [DataMember(Name = "int")]
    Int = 1,

    [DataMember(Name = "string")]
    String = 5,

    [DataMember(Name = "uint")]
    Uint = 2,

    [DataMember(Name = "unknown")]
    Unknown = 0,

  }
}