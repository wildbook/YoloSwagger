using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum PatcherComponentResourceHistory {
    [DataMember(Name = "keep")]
    Keep = 1,

    [DataMember(Name = "none")]
    None = 0,

  }
}