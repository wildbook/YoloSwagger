using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct TournamentHistoryAndWinnersDTO
    {
        [DataMember(Name = "tournamentHistory")]
        public TournamentDTO[] TournamentHistory { get; set; }

        [DataMember(Name = "tournamentWinnersCompressed")]
        public string TournamentWinnersCompressed { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TournamentHistoryAndWinnersDTO {\n");
            sb.Append("  TournamentHistory: ").Append(TournamentHistory).Append("\n");
            sb.Append("  TournamentWinnersCompressed: ").Append(TournamentWinnersCompressed).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}