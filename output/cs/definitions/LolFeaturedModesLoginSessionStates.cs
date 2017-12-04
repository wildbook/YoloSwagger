using System.Runtime.Serialization;
namespace leagueapi {
  enum LolFeaturedModesLoginSessionStates {
    [DataMember(Name = "LOGGING_OUT")]
    LOGGING_OUT = 2,

    [DataMember(Name = "IN_PROGRESS")]
    IN_PROGRESS = 0,

    [DataMember(Name = "SUCCEEDED")]
    SUCCEEDED = 1,

    [DataMember(Name = "ERROR")]
    ERROR = 3,

  }
}