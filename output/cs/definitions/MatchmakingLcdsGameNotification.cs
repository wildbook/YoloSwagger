using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MatchmakingLcdsGameNotification
    {
        [DataMember(Name = "messageArgument")]
        public string MessageArgument { get; set; }

        [DataMember(Name = "messageCode")]
        public string MessageCode { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsGameNotification {\n");
            sb.Append("  MessageArgument: ").Append(MessageArgument).Append("\n");
            sb.Append("  MessageCode: ").Append(MessageCode).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}