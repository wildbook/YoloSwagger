using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PhaseRosterSubDTO
    {
        [DataMember(Name = "bet")]
        public int Bet { get; set; }

        [DataMember(Name = "pay")]
        public int Pay { get; set; }

        [DataMember(Name = "playerId")]
        public ulong PlayerId { get; set; }

        [DataMember(Name = "position")]
        public Position Position { get; set; }

        [DataMember(Name = "replacedPlayerId")]
        public ulong ReplacedPlayerId { get; set; }

        [DataMember(Name = "subState")]
        public SubState SubState { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PhaseRosterSubDTO {\n");
            sb.Append("  Bet: ").Append(Bet).Append("\n");
            sb.Append("  Pay: ").Append(Pay).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("  Position: ").Append(Position).Append("\n");
            sb.Append("  ReplacedPlayerId: ").Append(ReplacedPlayerId).Append("\n");
            sb.Append("  SubState: ").Append(SubState).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}