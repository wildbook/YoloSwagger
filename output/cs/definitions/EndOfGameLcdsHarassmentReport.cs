using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct EndOfGameLcdsHarassmentReport
    {
        [DataMember(Name = "comment")]
        public string Comment { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "offense")]
        public string Offense { get; set; }

        [DataMember(Name = "reportSource")]
        public string ReportSource { get; set; }

        [DataMember(Name = "reportedSummonerId")]
        public ulong ReportedSummonerId { get; set; }

        [DataMember(Name = "reportingSummonerId")]
        public ulong ReportingSummonerId { get; set; }

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