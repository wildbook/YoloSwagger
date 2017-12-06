using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashRosterWithdrawNotification
    {
        [DataMember(Name = "notifyReason")]
        LolClashRosterNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "rosterId")]
        long RosterId { get; set; }

        [DataMember(Name = "sourcePlayerId")]
        ulong SourcePlayerId { get; set; }

        [DataMember(Name = "tournamentId")]
        long TournamentId { get; set; }

        [DataMember(Name = "withdraw")]
        RosterWithdraw Withdraw { get; set; }

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