using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLobbyMatchmakingDodgeState {
    [DataMember(Name = "Invalid")]
    Invalid = 48,

    [DataMember(Name = "PartyDodged")]
    PartyDodged = 49,

    [DataMember(Name = "StrangerDodged")]
    StrangerDodged = 50,

  }
}