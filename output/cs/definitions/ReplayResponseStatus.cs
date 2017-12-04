using System.Runtime.Serialization;
namespace leagueapi {
  enum ReplayResponseStatus {
    [DataMember(Name = "OK")]
    OK = 0,

    [DataMember(Name = "EXPIRED")]
    EXPIRED = 2,

    [DataMember(Name = "NOT_FOUND")]
    NOT_FOUND = 1,

    [DataMember(Name = "BAD_REQUEST")]
    BAD_REQUEST = 3,

    [DataMember(Name = "INTERNAL_SERVER_ERROR")]
    INTERNAL_SERVER_ERROR = 4,

  }
}