using System.Runtime.Serialization;
namespace leagueapi {
  enum LolClashKdaClassification {
    [DataMember(Name = "HIGH")]
    HIGH = 2,

    [DataMember(Name = "AVERAGE")]
    AVERAGE = 1,

    [DataMember(Name = "LOW")]
    LOW = 0,

  }
}