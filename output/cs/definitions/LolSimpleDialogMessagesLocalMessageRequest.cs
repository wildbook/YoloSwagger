using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSimpleDialogMessagesLocalMessageRequest
    {
        [DataMember(Name = "msgBody")]
        public string[] MsgBody { get; set; }

        [DataMember(Name = "msgType")]
        public string MsgType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSimpleDialogMessagesLocalMessageRequest {\n");
            sb.Append("  MsgBody: ").Append(MsgBody).Append("\n");
            sb.Append("  MsgType: ").Append(MsgType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}