using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LCDSPlayerMessagingSimpleMessage
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "bodyCode")]
        public string BodyCode { get; set; }

        [DataMember(Name = "msgId")]
        public string MsgId { get; set; }

        [DataMember(Name = "params")]
        public string[] Params { get; set; }

        [DataMember(Name = "titleCode")]
        public string TitleCode { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LCDSPlayerMessagingSimpleMessage {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  BodyCode: ").Append(BodyCode).Append("\n");
            sb.Append("  MsgId: ").Append(MsgId).Append("\n");
            sb.Append("  Params: ").Append(Params).Append("\n");
            sb.Append("  TitleCode: ").Append(TitleCode).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}