using System.Runtime.Serialization;
namespace leagueapi {
  enum PickModes {
    [DataMember(Name = "NOT_PICKING")]
    NOT_PICKING = 0,

    [DataMember(Name = "IN_PROGRESS")]
    IN_PROGRESS = 1,

    [DataMember(Name = "DONE")]
    DONE = 2,

  }
}