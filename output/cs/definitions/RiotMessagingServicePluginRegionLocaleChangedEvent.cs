using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RiotMessagingServicePluginRegionLocaleChangedEvent {
    [DataMember(Name = "locale")]
    string Locale {get; set;}

    [DataMember(Name = "region")]
    string Region {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RiotMessagingServicePluginRegionLocaleChangedEvent {\n");
      sb.Append("  Locale: ").Append(Locale).Append("\n");
      sb.Append("  Region: ").Append(Region).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}