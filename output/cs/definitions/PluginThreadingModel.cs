using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum PluginThreadingModel {
    [DataMember(Name = "concurrent")]
    Concurrent = 3,

    [DataMember(Name = "dedicated")]
    Dedicated = 1,

    [DataMember(Name = "parallel")]
    Parallel = 4,

    [DataMember(Name = "sequential")]
    Sequential = 2,

  }
}