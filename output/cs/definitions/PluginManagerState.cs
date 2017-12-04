using System.Runtime.Serialization;
namespace leagueapi {
  enum PluginManagerState {
    [DataMember(Name = "NotReady")]
    NotReady = 0,

    [DataMember(Name = "PluginsInitialized")]
    PluginsInitialized = 1,

  }
}