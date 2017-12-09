using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLobbyTeamBuilderMatchmakingDodgeState {
    [DataMember(Name = "Invalid")]
    Invalid = 48,

    [DataMember(Name = "PartyDodged")]
    PartyDodged = 49,

    [DataMember(Name = "StrangerDodged")]
    StrangerDodged = 50,

    [DataMember(Name = "TournamentDodged")]
    TournamentDodged = 51,

  }
}