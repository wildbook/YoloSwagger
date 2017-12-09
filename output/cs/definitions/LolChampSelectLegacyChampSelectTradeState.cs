using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolChampSelectLegacyChampSelectTradeState {
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