using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolMatchmakingMatchmakingReadyCheckResponse {
    [DataMember(Name = "None")]
    None = 48,

    [DataMember(Name = "Accepted")]
    Accepted = 49,

    [DataMember(Name = "Declined")]
    Declined = 50,

  }
}