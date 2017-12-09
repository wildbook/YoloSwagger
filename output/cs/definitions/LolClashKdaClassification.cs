using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolClashKdaClassification {
    [DataMember(Name = "AVERAGE")]
    AVERAGE = 1,

    [DataMember(Name = "HIGH")]
    HIGH = 2,

    [DataMember(Name = "LOW")]
    LOW = 0,

  }
}