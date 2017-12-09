using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSimpleDialogMessagesGameflowSession
    {
        [DataMember(Name = "phase")]
        public LolSimpleDialogMessagesGameflowPhase Phase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSimpleDialogMessagesGameflowSession {\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}