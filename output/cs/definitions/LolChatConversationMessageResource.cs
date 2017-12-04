using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatConversationMessageResource {
    [DataMember(Name = "body")]
    string Body {get; set;}

    [DataMember(Name = "timestamp")]
    string Timestamp {get; set;}

    [DataMember(Name = "isHistorical")]
    bool IsHistorical {get; set;}

    [DataMember(Name = "fromId")]
    ulong FromId {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    [DataMember(Name = "id")]
    string Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatConversationMessageResource {\n");
      sb.Append("  Body: ").Append(Body).Append("\n");
      sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
      sb.Append("  IsHistorical: ").Append(IsHistorical).Append("\n");
      sb.Append("  FromId: ").Append(FromId).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}