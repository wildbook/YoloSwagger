using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum NetworkExperimentStatus {
    [DataMember(Name = "Disabled")]
    Disabled = 0,

    [DataMember(Name = "Completed")]
    Completed = 3,

    [DataMember(Name = "Skipped")]
    Skipped = 1,

    [DataMember(Name = "InProgress")]
    InProgress = 2,

  }
}