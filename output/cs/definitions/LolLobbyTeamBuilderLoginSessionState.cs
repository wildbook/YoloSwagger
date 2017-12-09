using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLobbyTeamBuilderLoginSessionState {
    [DataMember(Name = "ERROR")]
    ERROR = 3,

    [DataMember(Name = "IN_PROGRESS")]
    IN_PROGRESS = 0,

    [DataMember(Name = "LOGGING_OUT")]
    LOGGING_OUT = 2,

    [DataMember(Name = "SUCCEEDED")]
    SUCCEEDED = 1,

  }
}