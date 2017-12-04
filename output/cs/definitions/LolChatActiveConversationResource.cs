using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatActiveConversationResource {
    [DataMember(Name = "id")]
    string Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatActiveConversationResource {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}