using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum ClientBracketMatchStatus {
    [DataMember(Name = "COMPLETED")]
    COMPLETED = 2,

    [DataMember(Name = "STARTED")]
    STARTED = 1,

    [DataMember(Name = "UPCOMING")]
    UPCOMING = 0,

  }
}