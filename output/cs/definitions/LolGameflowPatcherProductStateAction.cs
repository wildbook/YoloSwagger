using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolGameflowPatcherProductStateAction {
    [DataMember(Name = "CheckingForUpdates")]
    CheckingForUpdates = 1,

    [DataMember(Name = "Idle")]
    Idle = 0,

    [DataMember(Name = "Patching")]
    Patching = 2,

    [DataMember(Name = "Repairing")]
    Repairing = 3,

  }
}