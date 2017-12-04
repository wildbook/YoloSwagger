using System.Runtime.Serialization;
namespace leagueapi {
  enum LolClashMatchmakingReadyCheckResponse {
    [DataMember(Name = "None")]
    None = 48,

    [DataMember(Name = "Accepted")]
    Accepted = 49,

    [DataMember(Name = "Declined")]
    Declined = 50,

  }
}