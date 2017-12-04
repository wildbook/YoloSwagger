using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups {
    [DataMember(Name = "content")]
    string Content {get; set;}

    [DataMember(Name = "live")]
    bool Live {get; set;}

    [DataMember(Name = "title")]
    string Title {get; set;}

    [DataMember(Name = "id")]
    long Id {get; set;}

    [DataMember(Name = "slug")]
    string Slug {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEsportStreamNotificationsESportsAPI_streamgroups {\n");
      sb.Append("  Content: ").Append(Content).Append("\n");
      sb.Append("  Live: ").Append(Live).Append("\n");
      sb.Append("  Title: ").Append(Title).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Slug: ").Append(Slug).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}