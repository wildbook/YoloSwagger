using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolMatchmakingMatchmakingDodgeState {
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