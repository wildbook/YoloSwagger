using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolClashPresenceState {
    [DataMember(Name = "LOCKED_IN")]
    LOCKED_IN = 1,

    [DataMember(Name = "NONE")]
    NONE = 0,

    [DataMember(Name = "SCOUTING")]
    SCOUTING = 2,

  }
}