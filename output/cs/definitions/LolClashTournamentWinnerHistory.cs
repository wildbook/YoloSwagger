using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashTournamentWinnerHistory
    {
        [DataMember(Name = "tournamentId")]
        long TournamentId { get; set; }

        [DataMember(Name = "winners")]
        LolClashTournamentWinnerInfo[] Winners { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashTournamentWinnerHistory {\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  Winners: ").Append(Winners).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}