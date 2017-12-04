using System.Runtime.Serialization;
namespace leagueapi {
  enum PluginThreadingModel {
    [DataMember(Name = "concurrent")]
    Concurrent = 3,

    [DataMember(Name = "dedicated")]
    Dedicated = 1,

    [DataMember(Name = "sequential")]
    Sequential = 2,

    [DataMember(Name = "parallel")]
    Parallel = 4,

  }
}