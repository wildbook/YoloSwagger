using System.Runtime.Serialization;
namespace leagueapi {
  enum BuybackState {
    [DataMember(Name = "READY")]
    READY = 2,

    [DataMember(Name = "FORCED_NOT_READY")]
    FORCED_NOT_READY = 1,

    [DataMember(Name = "NOT_READY")]
    NOT_READY = 0,

  }
}