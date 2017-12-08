using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLobbyMatchmakingDodgeState {
    [DataMember(Name = "PartyDodged")]
    PartyDodged = 49,

    [DataMember(Name = "Invalid")]
    Invalid = 48,

    [DataMember(Name = "StrangerDodged")]
    StrangerDodged = 50,

  }
}