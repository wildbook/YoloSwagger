using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLeaguesLeagueEmblem {
    [DataMember(Name = "FRESHBLOOD")]
    FRESHBLOOD = 2,

    [DataMember(Name = "HOTSTREAK")]
    HOTSTREAK = 1,

    [DataMember(Name = "VETERAN")]
    VETERAN = 0,

  }
}