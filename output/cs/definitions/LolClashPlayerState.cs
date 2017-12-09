using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolClashPlayerState {
    [DataMember(Name = "BRACKET_ROSTER")]
    BRACKET_ROSTER = 2,

    [DataMember(Name = "ELIMINATED")]
    ELIMINATED = 3,

    [DataMember(Name = "HAS_ROSTER")]
    HAS_ROSTER = 1,

    [DataMember(Name = "NO_ROSTER")]
    NO_ROSTER = 0,

  }
}