using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct FailedInvite
    {
        [DataMember(Name = "exception")]
        public ClientRequestError Exception { get; set; }

        [DataMember(Name = "playerId")]
        public ulong PlayerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class FailedInvite {\n");
            sb.Append("  Exception: ").Append(Exception).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}