using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLeague
    {
        [DataMember(Name = "leagueTier")]
        public string LeagueTier { get; set; }

        [DataMember(Name = "queueType")]
        public string QueueType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLeague {\n");
            sb.Append("  LeagueTier: ").Append(LeagueTier).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}