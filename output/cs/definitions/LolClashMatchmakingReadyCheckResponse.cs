using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolClashMatchmakingReadyCheckResponse {
    [DataMember(Name = "Accepted")]
    Accepted = 49,

    [DataMember(Name = "Declined")]
    Declined = 50,

    [DataMember(Name = "None")]
    None = 48,

  }
}