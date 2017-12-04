using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatSanitizerStatus {
    [DataMember(Name = "locale")]
    string Locale {get; set;}

    [DataMember(Name = "platformID")]
    string PlatformID {get; set;}

    [DataMember(Name = "ready")]
    bool Ready {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatSanitizerStatus {\n");
      sb.Append("  Locale: ").Append(Locale).Append("\n");
      sb.Append("  PlatformID: ").Append(PlatformID).Append("\n");
      sb.Append("  Ready: ").Append(Ready).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}