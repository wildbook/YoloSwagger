using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LcdsSimpleMessageResponse
    {
        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        [DataMember(Name = "command")]
        string Command { get; set; }

        [DataMember(Name = "msgId")]
        string MsgId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsSimpleMessageResponse {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  Command: ").Append(Command).Append("\n");
            sb.Append("  MsgId: ").Append(MsgId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}