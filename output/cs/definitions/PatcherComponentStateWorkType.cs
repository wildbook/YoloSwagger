using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum PatcherComponentStateWorkType {
    [DataMember(Name = "Disk")]
    Disk = 2,

    [DataMember(Name = "Network")]
    Network = 1,

    [DataMember(Name = "Scanning")]
    Scanning = 0,

  }
}