using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct EndOfGameLcdsClientReportV1
    {
        [DataMember(Name = "comments")]
        public string Comments { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "offenderSummonerId")]
        public ulong OffenderSummonerId { get; set; }

        [DataMember(Name = "offenses")]
        public string Offenses { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameLcdsClientReportV1 {\n");
            sb.Append("  Comments: ").Append(Comments).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  OffenderSummonerId: ").Append(OffenderSummonerId).Append("\n");
            sb.Append("  Offenses: ").Append(Offenses).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}