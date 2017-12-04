using System.Runtime.Serialization;
namespace leagueapi {
  enum LolClashClashVisibility {
    [DataMember(Name = "DarkVisible")]
    DarkVisible = 1,

    [DataMember(Name = "Hidden")]
    Hidden = 0,

    [DataMember(Name = "Visible")]
    Visible = 2,

  }
}