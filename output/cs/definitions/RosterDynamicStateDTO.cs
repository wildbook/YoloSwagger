using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RosterDynamicStateDTO
    {
        [DataMember(Name = "members")]
        BuybackMember[] Members { get; set; }

        [DataMember(Name = "phaseCheckinStates")]
        ulong[] PhaseCheckinStates { get; set; }

        [DataMember(Name = "phaseRosterSubs")]
        PhaseRosterSubDTO[] PhaseRosterSubs { get; set; }

        [DataMember(Name = "rosterId")]
        long RosterId { get; set; }

        [DataMember(Name = "ticketOffers")]
        TicketOfferDTO[] TicketOffers { get; set; }

        [DataMember(Name = "tournamentId")]
        long TournamentId { get; set; }

        [DataMember(Name = "withdraw")]
        RosterWithdraw Withdraw { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterDynamicStateDTO {\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  PhaseCheckinStates: ").Append(PhaseCheckinStates).Append("\n");
            sb.Append("  PhaseRosterSubs: ").Append(PhaseRosterSubs).Append("\n");
            sb.Append("  RosterId: ").Append(RosterId).Append("\n");
            sb.Append("  TicketOffers: ").Append(TicketOffers).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  Withdraw: ").Append(Withdraw).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}