using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum NetworkExperimentStatus {
    [DataMember(Name = "Completed")]
    Completed = 3,

    [DataMember(Name = "Disabled")]
    Disabled = 0,

    [DataMember(Name = "InProgress")]
    InProgress = 2,

    [DataMember(Name = "Skipped")]
    Skipped = 1,

  }
}