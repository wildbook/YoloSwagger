using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct EndOfGameLcdsHarassmentReport
    {
        [DataMember(Name = "comment")]
        string Comment { get; set; }

        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        [DataMember(Name = "offense")]
        string Offense { get; set; }

        [DataMember(Name = "reportSource")]
        string ReportSource { get; set; }

        [DataMember(Name = "reportedSummonerId")]
        ulong ReportedSummonerId { get; set; }

        [DataMember(Name = "reportingSummonerId")]
        ulong ReportingSummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameLcdsHarassmentReport {\n");
            sb.Append("  Comment: ").Append(Comment).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  Offense: ").Append(Offense).Append("\n");
            sb.Append("  ReportSource: ").Append(ReportSource).Append("\n");
            sb.Append("  ReportedSummonerId: ").Append(ReportedSummonerId).Append("\n");
            sb.Append("  ReportingSummonerId: ").Append(ReportingSummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}