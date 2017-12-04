using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLobbyInvitationType {
    [DataMember(Name = "party")]
    Party = 2,

    [DataMember(Name = "lobby")]
    Lobby = 1,

    [DataMember(Name = "invalid")]
    Invalid = 0,

  }
}