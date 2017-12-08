using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolGameflowPatcherProductStateAction {
    [DataMember(Name = "Repairing")]
    Repairing = 3,

    [DataMember(Name = "Idle")]
    Idle = 0,

    [DataMember(Name = "Patching")]
    Patching = 2,

    [DataMember(Name = "CheckingForUpdates")]
    CheckingForUpdates = 1,

  }
}