using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum PatcherComponentResourceHistory {
    [DataMember(Name = "keep")]
    Keep = 1,

    [DataMember(Name = "none")]
    None = 0,

  }
}