using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolClashClashState {
    [DataMember(Name = "DarkDisabled")]
    DarkDisabled = 0,

    [DataMember(Name = "Disabled")]
    Disabled = 2,

    [DataMember(Name = "Enabled")]
    Enabled = 3,

    [DataMember(Name = "DarkEnabled")]
    DarkEnabled = 1,

  }
}