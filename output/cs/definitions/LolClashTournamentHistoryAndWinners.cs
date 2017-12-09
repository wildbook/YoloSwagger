using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashTournamentHistoryAndWinners
    {
        [DataMember(Name = "tournamentHistory")]
        public LolClashTournament[] TournamentHistory { get; set; }

        [DataMember(Name = "tournamentWinners")]
        public LolClashTournamentWinnerHistory TournamentWinners { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashTournamentHistoryAndWinners {\n");
            sb.Append("  TournamentHistory: ").Append(TournamentHistory).Append("\n");
            sb.Append("  TournamentWinners: ").Append(TournamentWinners).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}