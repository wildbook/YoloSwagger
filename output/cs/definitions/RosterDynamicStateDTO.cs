using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RosterDynamicStateDTO
    {
        [DataMember(Name = "members")]
        public BuybackMember[] Members { get; set; }

        [DataMember(Name = "phaseCheckinStates")]
        public ulong[] PhaseCheckinStates { get; set; }

        [DataMember(Name = "phaseRosterSubs")]
        public PhaseRosterSubDTO[] PhaseRosterSubs { get; set; }

        [DataMember(Name = "rosterId")]
        public long RosterId { get; set; }

        [DataMember(Name = "ticketOffers")]
        public TicketOfferDTO[] TicketOffers { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        [DataMember(Name = "withdraw")]
        public RosterWithdraw Withdraw { get; set; }

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