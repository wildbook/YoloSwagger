using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum PatcherComponentStateWorkType {
    [DataMember(Name = "Scanning")]
    Scanning = 0,

    [DataMember(Name = "Disk")]
    Disk = 2,

    [DataMember(Name = "Network")]
    Network = 1,

  }
}