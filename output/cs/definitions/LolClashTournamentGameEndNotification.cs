using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashTournamentGameEndNotification
    {
        [DataMember(Name = "bracket")]
        public Bracket Bracket { get; set; }

        [DataMember(Name = "currentMatchId")]
        public long CurrentMatchId { get; set; }

        [DataMember(Name = "notifyReason")]
        public LolClashRosterNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "timestamp")]
        public long Timestamp { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashTournamentGameEndNotification {\n");
            sb.Append("  Bracket: ").Append(Bracket).Append("\n");
            sb.Append("  CurrentMatchId: ").Append(CurrentMatchId).Append("\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}