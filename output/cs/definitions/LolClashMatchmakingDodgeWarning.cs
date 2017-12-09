using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolClashMatchmakingDodgeWarning {
    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "Penalty")]
    Penalty = 2,

    [DataMember(Name = "Warning")]
    Warning = 1,

  }
}