using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatSanitizeResponse {
    [DataMember(Name = "texts")]
    string[] Texts {get; set;}

    [DataMember(Name = "modified")]
    bool Modified {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatSanitizeResponse {\n");
      sb.Append("  Texts: ").Append(Texts).Append("\n");
      sb.Append("  Modified: ").Append(Modified).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}