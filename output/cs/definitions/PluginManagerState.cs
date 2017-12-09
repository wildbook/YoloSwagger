using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum PluginManagerState {
    [DataMember(Name = "NotReady")]
    NotReady = 0,

    [DataMember(Name = "PluginsInitialized")]
    PluginsInitialized = 1,

  }
}