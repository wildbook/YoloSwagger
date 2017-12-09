using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolMatchmakingMatchmakingReadyCheckResponse {
    [DataMember(Name = "Accepted")]
    Accepted = 49,

    [DataMember(Name = "Declined")]
    Declined = 50,

    [DataMember(Name = "None")]
    None = 48,

  }
}