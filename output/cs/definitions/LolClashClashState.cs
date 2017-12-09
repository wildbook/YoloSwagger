using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolClashClashState {
    [DataMember(Name = "DarkDisabled")]
    DarkDisabled = 0,

    [DataMember(Name = "DarkEnabled")]
    DarkEnabled = 1,

    [DataMember(Name = "Disabled")]
    Disabled = 2,

    [DataMember(Name = "Enabled")]
    Enabled = 3,

  }
}