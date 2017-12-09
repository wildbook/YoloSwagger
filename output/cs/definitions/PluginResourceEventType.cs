using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum PluginResourceEventType {
    [DataMember(Name = "Create")]
    Create = 0,

    [DataMember(Name = "Delete")]
    Delete = 2,

    [DataMember(Name = "Update")]
    Update = 1,

  }
}