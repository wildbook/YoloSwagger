using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LcdsGameNotification
    {
        [DataMember(Name = "messageCode")]
        string MessageCode { get; set; }

        [DataMember(Name = "messageArgument")]
        string MessageArgument { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsGameNotification {\n");
            sb.Append("  MessageCode: ").Append(MessageCode).Append("\n");
            sb.Append("  MessageArgument: ").Append(MessageArgument).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}