using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLeaguesLeagueQueueType {
    [DataMember(Name = "FLEXSR")]
    FLEXSR = 3,

    [DataMember(Name = "NONE")]
    NONE = 0,

    [DataMember(Name = "FLEXTT")]
    FLEXTT = 2,

    [DataMember(Name = "SOLO5V5")]
    SOLO5V5 = 1,

  }
}