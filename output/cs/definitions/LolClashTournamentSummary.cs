using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashTournamentSummary
    {
        [DataMember(Name = "bracketId")]
        public long BracketId { get; set; }

        [DataMember(Name = "rosterId")]
        public string RosterId { get; set; }

        [DataMember(Name = "state")]
        public LolClashTournamentState State { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashTournamentSummary {\n");
            sb.Append("  BracketId: ").Append(BracketId).Append("\n");
            sb.Append("  RosterId: ").Append(RosterId).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}