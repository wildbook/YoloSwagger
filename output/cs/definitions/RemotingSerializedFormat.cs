using System.Runtime.Serialization;
namespace leagueapi {
  // Serialization format for remoting requests and results.
  [DataContract]  enum RemotingSerializedFormat {
    [DataMember(Name = "JSON")]
    JSON = 1,

    [DataMember(Name = "MsgPack")]
    MsgPack = 3,

    [DataMember(Name = "YAML")]
    YAML = 2,

  }
}