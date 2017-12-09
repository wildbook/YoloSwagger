using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum RiotMessagingServiceTokenType {
    [DataMember(Name = "Access")]
    Access = 1,

    [DataMember(Name = "Identity")]
    Identity = 2,

    [DataMember(Name = "Unavailable")]
    Unavailable = 0,

  }
}