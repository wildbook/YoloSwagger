using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum PluginManagerState {
    [DataMember(Name = "NotReady")]
    NotReady = 0,

    [DataMember(Name = "PluginsInitialized")]
    PluginsInitialized = 1,

  }
}