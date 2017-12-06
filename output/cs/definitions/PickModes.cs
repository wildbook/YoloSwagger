using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum PickModes {
    [DataMember(Name = "DONE")]
    DONE = 2,

    [DataMember(Name = "IN_PROGRESS")]
    IN_PROGRESS = 1,

    [DataMember(Name = "NOT_PICKING")]
    NOT_PICKING = 0,

  }
}