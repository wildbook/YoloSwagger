using System.Runtime.Serialization;
namespace leagueapi {
  enum LolClashMatchmakingDodgeState {
    [DataMember(Name = "PartyDodged")]
    PartyDodged = 49,

    [DataMember(Name = "TournamentDodged")]
    TournamentDodged = 51,

    [DataMember(Name = "Invalid")]
    Invalid = 48,

    [DataMember(Name = "StrangerDodged")]
    StrangerDodged = 50,

  }
}