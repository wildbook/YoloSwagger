using System.Runtime.Serialization;
namespace leagueapi {
  enum MetricDataType {
    [DataMember(Name = "string")]
    String = 5,

    [DataMember(Name = "int")]
    Int = 1,

    [DataMember(Name = "unknown")]
    Unknown = 0,

    [DataMember(Name = "float")]
    Float = 3,

    [DataMember(Name = "uint")]
    Uint = 2,

    [DataMember(Name = "bool")]
    Bool = 4,

  }
}