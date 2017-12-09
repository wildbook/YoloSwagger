using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaverBusterSimpleMessageResponse
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "command")]
        public string Command { get; set; }

        [DataMember(Name = "msgId")]
        public string MsgId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaverBusterSimpleMessageResponse {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  Command: ").Append(Command).Append("\n");
            sb.Append("  MsgId: ").Append(MsgId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}