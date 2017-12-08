using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum PatcherComponentResourceHistory {
    [DataMember(Name = "none")]
    None = 0,

    [DataMember(Name = "keep")]
    Keep = 1,

  }
}