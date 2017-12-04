using System.Runtime.Serialization;
namespace leagueapi {
  enum PluginResourceEventType {
    [DataMember(Name = "Create")]
    Create = 0,

    [DataMember(Name = "Update")]
    Update = 1,

    [DataMember(Name = "Delete")]
    Delete = 2,

  }
}