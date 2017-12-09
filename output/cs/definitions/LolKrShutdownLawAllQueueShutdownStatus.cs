using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolKrShutdownLawAllQueueShutdownStatus
    {
        [DataMember(Name = "isAllQueuesDisabled")]
        public bool IsAllQueuesDisabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolKrShutdownLawAllQueueShutdownStatus {\n");
            sb.Append("  IsAllQueuesDisabled: ").Append(IsAllQueuesDisabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}