using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum GameQueuesLcdsAllowSpectators {
    [DataMember(Name = "ALL")]
    ALL = 3,

    [DataMember(Name = "DROPINONLY")]
    DROPINONLY = 2,

    [DataMember(Name = "LOBBYONLY")]
    LOBBYONLY = 1,

    [DataMember(Name = "NONE")]
    NONE = 0,

  }
}