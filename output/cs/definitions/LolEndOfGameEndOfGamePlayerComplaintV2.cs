using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEndOfGameEndOfGamePlayerComplaintV2
    {
        [DataMember(Name = "comment")]
        string Comment { get; set; }

        [DataMember(Name = "offenses")]
        string Offenses { get; set; }

        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        [DataMember(Name = "reportedSummonerId")]
        ulong ReportedSummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEndOfGameEndOfGamePlayerComplaintV2 {\n");
            sb.Append("  Comment: ").Append(Comment).Append("\n");
            sb.Append("  Offenses: ").Append(Offenses).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  ReportedSummonerId: ").Append(ReportedSummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}