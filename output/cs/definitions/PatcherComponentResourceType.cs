using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum PatcherComponentResourceType {
    [DataMember(Name = "project")]
    Project = 0,

    [DataMember(Name = "solution")]
    Solution = 1,

  }
}