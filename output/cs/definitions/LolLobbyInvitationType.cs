using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLobbyInvitationType {
    [DataMember(Name = "invalid")]
    Invalid = 0,

    [DataMember(Name = "lobby")]
    Lobby = 1,

    [DataMember(Name = "party")]
    Party = 2,

  }
}