using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLobbyTeamBuilderLobbyRemovedFromGameReason {
    [DataMember(Name = "None")]
    None = 0,

    [DataMember(Name = "Kicked")]
    Kicked = 1,

    [DataMember(Name = "GameStartError")]
    GameStartError = 7,

    [DataMember(Name = "ServiceShutdown")]
    ServiceShutdown = 8,

    [DataMember(Name = "Disbanded")]
    Disbanded = 2,

    [DataMember(Name = "Other")]
    Other = 5,

    [DataMember(Name = "ServiceError")]
    ServiceError = 4,

    [DataMember(Name = "Timeout")]
    Timeout = 6,

    [DataMember(Name = "Left")]
    Left = 3,

  }
}