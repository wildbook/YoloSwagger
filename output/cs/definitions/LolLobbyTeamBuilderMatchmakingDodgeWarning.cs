using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLobbyTeamBuilderMatchmakingDodgeWarning {
    [DataMember(Name = "Penalty")]
    Penalty = 2,

    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "Warning")]
    Warning = 1,

  }
}