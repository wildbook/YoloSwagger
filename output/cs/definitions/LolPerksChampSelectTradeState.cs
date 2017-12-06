using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolPerksChampSelectTradeState {
    [DataMember(Name = "AVAILABLE")]
    AVAILABLE = 1,

    [DataMember(Name = "BUSY")]
    BUSY = 2,

    [DataMember(Name = "INVALID")]
    INVALID = 3,

    [DataMember(Name = "RECEIVED")]
    RECEIVED = 4,

    [DataMember(Name = "SENT")]
    SENT = 5,

  }
}