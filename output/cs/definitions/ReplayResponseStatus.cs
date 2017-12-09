using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum ReplayResponseStatus {
    [DataMember(Name = "BAD_REQUEST")]
    BAD_REQUEST = 3,

    [DataMember(Name = "EXPIRED")]
    EXPIRED = 2,

    [DataMember(Name = "INTERNAL_SERVER_ERROR")]
    INTERNAL_SERVER_ERROR = 4,

    [DataMember(Name = "NOT_FOUND")]
    NOT_FOUND = 1,

    [DataMember(Name = "OK")]
    OK = 0,

  }
}