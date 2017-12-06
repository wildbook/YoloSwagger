using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum PluginResourceEventType {
    [DataMember(Name = "Create")]
    Create = 0,

    [DataMember(Name = "Delete")]
    Delete = 2,

    [DataMember(Name = "Update")]
    Update = 1,

  }
}