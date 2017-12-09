using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaguesLcdsMiniSeriesDTO
    {
        [DataMember(Name = "losses")]
        public ulong Losses { get; set; }

        [DataMember(Name = "progress")]
        public string Progress { get; set; }

        [DataMember(Name = "target")]
        public ulong Target { get; set; }

        [DataMember(Name = "timeLeftToPlayMillis")]
        public ulong TimeLeftToPlayMillis { get; set; }

        [DataMember(Name = "wins")]
        public ulong Wins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsMiniSeriesDTO {\n");
            sb.Append("  Losses: ").Append(Losses).Append("\n");
            sb.Append("  Progress: ").Append(Progress).Append("\n");
            sb.Append("  Target: ").Append(Target).Append("\n");
            sb.Append("  TimeLeftToPlayMillis: ").Append(TimeLeftToPlayMillis).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}