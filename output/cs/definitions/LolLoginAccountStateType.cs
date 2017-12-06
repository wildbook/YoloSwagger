using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLoginAccountStateType {
    [DataMember(Name = "CREATING")]
    CREATING = 1,

    [DataMember(Name = "ENABLED")]
    ENABLED = 2,

    [DataMember(Name = "GENERATING")]
    GENERATING = 6,

    [DataMember(Name = "TRANSFERRED_OUT")]
    TRANSFERRED_OUT = 5,

    [DataMember(Name = "TRANSFERRING_IN")]
    TRANSFERRING_IN = 4,

    [DataMember(Name = "TRANSFERRING_OUT")]
    TRANSFERRING_OUT = 3,

  }
}