using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRosterWithdrawNotification
    {
        [DataMember(Name = "notifyReason")]
        public LolClashRosterNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "rosterId")]
        public long RosterId { get; set; }

        [DataMember(Name = "sourcePlayerId")]
        public ulong SourcePlayerId { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        [DataMember(Name = "withdraw")]
        public RosterWithdraw Withdraw { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRosterWithdrawNotification {\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  RosterId: ").Append(RosterId).Append("\n");
            sb.Append("  SourcePlayerId: ").Append(SourcePlayerId).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  Withdraw: ").Append(Withdraw).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}