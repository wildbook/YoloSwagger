using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RosterDTO
    {
        [DataMember(Name = "phases")]
        PhaseRosterDTO[] Phases { get; set; }

        [DataMember(Name = "losses")]
        int Losses { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "shortName")]
        string ShortName { get; set; }

        [DataMember(Name = "wins")]
        int Wins { get; set; }

        [DataMember(Name = "dynamicState")]
        RosterDynamicStateDTO DynamicState { get; set; }

        [DataMember(Name = "logoColor")]
        int LogoColor { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "tournamentId")]
        long TournamentId { get; set; }

        [DataMember(Name = "members")]
        RosterMemberDTO[] Members { get; set; }

        [DataMember(Name = "tier")]
        int Tier { get; set; }

        [DataMember(Name = "logo")]
        int Logo { get; set; }

        [DataMember(Name = "captainId")]
        ulong CaptainId { get; set; }

        [DataMember(Name = "eliminated")]
        bool Eliminated { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterDTO {\n");
            sb.Append("  Phases: ").Append(Phases).Append("\n");
            sb.Append("  Losses: ").Append(Losses).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("  DynamicState: ").Append(DynamicState).Append("\n");
            sb.Append("  LogoColor: ").Append(LogoColor).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  Logo: ").Append(Logo).Append("\n");
            sb.Append("  CaptainId: ").Append(CaptainId).Append("\n");
            sb.Append("  Eliminated: ").Append(Eliminated).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}