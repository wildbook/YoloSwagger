using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLeaguesLeagueEmblem {
    [DataMember(Name = "VETERAN")]
    VETERAN = 0,

    [DataMember(Name = "HOTSTREAK")]
    HOTSTREAK = 1,

    [DataMember(Name = "FRESHBLOOD")]
    FRESHBLOOD = 2,

  }
}