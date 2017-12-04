using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLoginAccountStateType {
    [DataMember(Name = "GENERATING")]
    GENERATING = 6,

    [DataMember(Name = "TRANSFERRING_IN")]
    TRANSFERRING_IN = 4,

    [DataMember(Name = "CREATING")]
    CREATING = 1,

    [DataMember(Name = "ENABLED")]
    ENABLED = 2,

    [DataMember(Name = "TRANSFERRING_OUT")]
    TRANSFERRING_OUT = 3,

    [DataMember(Name = "TRANSFERRED_OUT")]
    TRANSFERRED_OUT = 5,

  }
}