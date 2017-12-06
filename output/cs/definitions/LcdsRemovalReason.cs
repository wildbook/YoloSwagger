using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LcdsRemovalReason {
    [DataMember(Name = "DESTROYED")]
    DESTROYED = 1,

    [DataMember(Name = "KICKED")]
    KICKED = 0,

    [DataMember(Name = "PROGRESSED")]
    PROGRESSED = 2,

  }
}