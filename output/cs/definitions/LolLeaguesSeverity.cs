using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLeaguesSeverity {
    [DataMember(Name = "ALERT")]
    ALERT = 1,

    [DataMember(Name = "WARNING")]
    WARNING = 0,

  }
}