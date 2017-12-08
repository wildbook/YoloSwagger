using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LeaguesLcdsMiniSeriesDTO
    {
        [DataMember(Name = "wins")]
        ulong Wins { get; set; }

        [DataMember(Name = "progress")]
        string Progress { get; set; }

        [DataMember(Name = "losses")]
        ulong Losses { get; set; }

        [DataMember(Name = "target")]
        ulong Target { get; set; }

        [DataMember(Name = "timeLeftToPlayMillis")]
        ulong TimeLeftToPlayMillis { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsMiniSeriesDTO {\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("  Progress: ").Append(Progress).Append("\n");
            sb.Append("  Losses: ").Append(Losses).Append("\n");
            sb.Append("  Target: ").Append(Target).Append("\n");
            sb.Append("  TimeLeftToPlayMillis: ").Append(TimeLeftToPlayMillis).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}