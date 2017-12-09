using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolRankedStatsPluginStatus
    {
        [DataMember(Name = "ready")]
        public bool Ready { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolRankedStatsPluginStatus {\n");
            sb.Append("  Ready: ").Append(Ready).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}