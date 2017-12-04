using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_teams {
    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "acronym")]
    string Acronym {get; set;}

    [DataMember(Name = "id")]
    long Id {get; set;}

    [DataMember(Name = "logoUrl")]
    string LogoUrl {get; set;}

    [DataMember(Name = "guid")]
    string Guid {get; set;}

    [DataMember(Name = "slug")]
    string Slug {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEsportStreamNotificationsEsportsAPI_teams {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Acronym: ").Append(Acronym).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  LogoUrl: ").Append(LogoUrl).Append("\n");
      sb.Append("  Guid: ").Append(Guid).Append("\n");
      sb.Append("  Slug: ").Append(Slug).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}