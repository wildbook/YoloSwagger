using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLobbyLobbyPartyRewardType {
    [DataMember(Name = "Icon")]
    Icon = 2,

    [DataMember(Name = "Ip")]
    Ip = 1,

    [DataMember(Name = "None")]
    None = 9999,

  }
}