using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum PatcherComponentResourceType {
    [DataMember(Name = "project")]
    Project = 0,

    [DataMember(Name = "solution")]
    Solution = 1,

  }
}