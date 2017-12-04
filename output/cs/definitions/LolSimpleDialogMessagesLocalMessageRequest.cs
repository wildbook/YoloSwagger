using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSimpleDialogMessagesLocalMessageRequest {
    [DataMember(Name = "msgType")]
    string MsgType {get; set;}

    [DataMember(Name = "msgBody")]
    string[] MsgBody {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSimpleDialogMessagesLocalMessageRequest {\n");
      sb.Append("  MsgType: ").Append(MsgType).Append("\n");
      sb.Append("  MsgBody: ").Append(MsgBody).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}