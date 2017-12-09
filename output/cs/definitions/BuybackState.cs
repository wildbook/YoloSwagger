using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum BuybackState {
    [DataMember(Name = "FORCED_NOT_READY")]
    FORCED_NOT_READY = 1,

    [DataMember(Name = "NOT_READY")]
    NOT_READY = 0,

    [DataMember(Name = "READY")]
    READY = 2,

  }
}