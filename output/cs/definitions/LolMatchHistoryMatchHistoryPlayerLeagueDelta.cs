using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryPlayerLeagueDelta
    {
        [DataMember(Name = "leaguePointDelta")]
        public ulong LeaguePointDelta { get; set; }

        [DataMember(Name = "miniSeriesProgress")]
        public string[] MiniSeriesProgress { get; set; }

        [DataMember(Name = "reason")]
        public string Reason { get; set; }

        [DataMember(Name = "timestamp")]
        public ulong Timestamp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryPlayerLeagueDelta {\n");
            sb.Append("  LeaguePointDelta: ").Append(LeaguePointDelta).Append("\n");
            sb.Append("  MiniSeriesProgress: ").Append(MiniSeriesProgress).Append("\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}