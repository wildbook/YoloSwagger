using System.Runtime.Serialization;
namespace leagueapi {
  enum LolChampSelectChampSelectTradeState {
    [DataMember(Name = "AVAILABLE")]
    AVAILABLE = 1,

    [DataMember(Name = "RECEIVED")]
    RECEIVED = 4,

    [DataMember(Name = "BUSY")]
    BUSY = 2,

    [DataMember(Name = "SENT")]
    SENT = 5,

    [DataMember(Name = "INVALID")]
    INVALID = 3,

  }
}