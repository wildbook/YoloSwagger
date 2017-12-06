using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLobbyInvitationType {
    [DataMember(Name = "invalid")]
    Invalid = 0,

    [DataMember(Name = "lobby")]
    Lobby = 1,

    [DataMember(Name = "party")]
    Party = 2,

  }
}