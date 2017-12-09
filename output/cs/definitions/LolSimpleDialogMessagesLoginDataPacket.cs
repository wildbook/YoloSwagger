using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSimpleDialogMessagesLoginDataPacket
    {
        [DataMember(Name = "simpleMessages")]
        public LolSimpleDialogMessagesSimpleMessage[] SimpleMessages { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSimpleDialogMessagesLoginDataPacket {\n");
            sb.Append("  SimpleMessages: ").Append(SimpleMessages).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}