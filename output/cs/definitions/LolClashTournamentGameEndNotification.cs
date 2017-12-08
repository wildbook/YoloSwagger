using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashTournamentGameEndNotification
    {
        [DataMember(Name = "timestamp")]
        long Timestamp { get; set; }

        [DataMember(Name = "notifyReason")]
        LolClashRosterNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "bracket")]
        Bracket Bracket { get; set; }

        [DataMember(Name = "tournamentId")]
        long TournamentId { get; set; }

        [DataMember(Name = "currentMatchId")]
        long CurrentMatchId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashTournamentGameEndNotification {\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  Bracket: ").Append(Bracket).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  CurrentMatchId: ").Append(CurrentMatchId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}