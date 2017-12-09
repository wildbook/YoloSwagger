using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RosterDTO
    {
        [DataMember(Name = "captainId")]
        public ulong CaptainId { get; set; }

        [DataMember(Name = "dynamicState")]
        public RosterDynamicStateDTO DynamicState { get; set; }

        [DataMember(Name = "eliminated")]
        public bool Eliminated { get; set; }

        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "logo")]
        public int Logo { get; set; }

        [DataMember(Name = "logoColor")]
        public int LogoColor { get; set; }

        [DataMember(Name = "losses")]
        public int Losses { get; set; }

        [DataMember(Name = "members")]
        public RosterMemberDTO[] Members { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "phases")]
        public PhaseRosterDTO[] Phases { get; set; }

        [DataMember(Name = "shortName")]
        public string ShortName { get; set; }

        [DataMember(Name = "tier")]
        public int Tier { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        [DataMember(Name = "wins")]
        public int Wins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterDTO {\n");
            sb.Append("  CaptainId: ").Append(CaptainId).Append("\n");
            sb.Append("  DynamicState: ").Append(DynamicState).Append("\n");
            sb.Append("  Eliminated: ").Append(Eliminated).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Logo: ").Append(Logo).Append("\n");
            sb.Append("  LogoColor: ").Append(LogoColor).Append("\n");
            sb.Append("  Losses: ").Append(Losses).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Phases: ").Append(Phases).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}