using System.Runtime.Serialization;
namespace LeagueClientApi {
  // Serialization format for remoting requests and results.
  [DataContract]  public enum RemotingSerializedFormat {
    [DataMember(Name = "JSON")]
    JSON = 1,

    [DataMember(Name = "MsgPack")]
    MsgPack = 3,

    [DataMember(Name = "YAML")]
    YAML = 2,

  }
}