using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PendingRosterDTO {
    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "inviteFaileds")]
    FailedInvite[] InviteFaileds {get; set;}

    [DataMember(Name = "tournamentId")]
    long TournamentId {get; set;}

    [DataMember(Name = "logoColor")]
    int LogoColor {get; set;}

    [DataMember(Name = "ticketOffers")]
    TicketOfferDTO[] TicketOffers {get; set;}

    [DataMember(Name = "invitationId")]
    string InvitationId {get; set;}

    [DataMember(Name = "members")]
    PendingRosterMemberDTO[] Members {get; set;}

    [DataMember(Name = "tier")]
    int Tier {get; set;}

    [DataMember(Name = "logo")]
    int Logo {get; set;}

    [DataMember(Name = "captainId")]
    ulong CaptainId {get; set;}

    [DataMember(Name = "shortName")]
    string ShortName {get; set;}

    [DataMember(Name = "invitees")]
    PendingRosterInviteeDTO[] Invitees {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PendingRosterDTO {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  InviteFaileds: ").Append(InviteFaileds).Append("\n");
      sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
      sb.Append("  LogoColor: ").Append(LogoColor).Append("\n");
      sb.Append("  TicketOffers: ").Append(TicketOffers).Append("\n");
      sb.Append("  InvitationId: ").Append(InvitationId).Append("\n");
      sb.Append("  Members: ").Append(Members).Append("\n");
      sb.Append("  Tier: ").Append(Tier).Append("\n");
      sb.Append("  Logo: ").Append(Logo).Append("\n");
      sb.Append("  CaptainId: ").Append(CaptainId).Append("\n");
      sb.Append("  ShortName: ").Append(ShortName).Append("\n");
      sb.Append("  Invitees: ").Append(Invitees).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}