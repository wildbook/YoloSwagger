using System.Runtime.Serialization;
namespace leagueapi {
  enum LolClashMatchmakingDodgeWarning {
    [DataMember(Name = "Penalty")]
    Penalty = 2,

    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "Warning")]
    Warning = 1,

  }
}