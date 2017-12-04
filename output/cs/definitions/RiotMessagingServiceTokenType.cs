using System.Runtime.Serialization;
namespace leagueapi {
  enum RiotMessagingServiceTokenType {
    [DataMember(Name = "Access")]
    Access = 1,

    [DataMember(Name = "Unavailable")]
    Unavailable = 0,

    [DataMember(Name = "Identity")]
    Identity = 2,

  }
}