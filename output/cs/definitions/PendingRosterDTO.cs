using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PendingRosterDTO
    {
        [DataMember(Name = "captainId")]
        public ulong CaptainId { get; set; }

        [DataMember(Name = "invitationId")]
        public string InvitationId { get; set; }

        [DataMember(Name = "inviteFaileds")]
        public FailedInvite[] InviteFaileds { get; set; }

        [DataMember(Name = "invitees")]
        public PendingRosterInviteeDTO[] Invitees { get; set; }

        [DataMember(Name = "logo")]
        public int Logo { get; set; }

        [DataMember(Name = "logoColor")]
        public int LogoColor { get; set; }

        [DataMember(Name = "members")]
        public PendingRosterMemberDTO[] Members { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "shortName")]
        public string ShortName { get; set; }

        [DataMember(Name = "ticketOffers")]
        public TicketOfferDTO[] TicketOffers { get; set; }

        [DataMember(Name = "tier")]
        public int Tier { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PendingRosterDTO {\n");
            sb.Append("  CaptainId: ").Append(CaptainId).Append("\n");
            sb.Append("  InvitationId: ").Append(InvitationId).Append("\n");
            sb.Append("  InviteFaileds: ").Append(InviteFaileds).Append("\n");
            sb.Append("  Invitees: ").Append(Invitees).Append("\n");
            sb.Append("  Logo: ").Append(Logo).Append("\n");
            sb.Append("  LogoColor: ").Append(LogoColor).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  TicketOffers: ").Append(TicketOffers).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}