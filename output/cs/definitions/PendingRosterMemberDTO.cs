using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PendingRosterMemberDTO
    {
        [DataMember(Name = "bet")]
        public int Bet { get; set; }

        [DataMember(Name = "joinTime")]
        public long JoinTime { get; set; }

        [DataMember(Name = "memberState")]
        public PendingRosterMemberState MemberState { get; set; }

        [DataMember(Name = "pay")]
        public int Pay { get; set; }

        [DataMember(Name = "playerId")]
        public ulong PlayerId { get; set; }

        [DataMember(Name = "position")]
        public Position Position { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PendingRosterMemberDTO {\n");
            sb.Append("  Bet: ").Append(Bet).Append("\n");
            sb.Append("  JoinTime: ").Append(JoinTime).Append("\n");
            sb.Append("  MemberState: ").Append(MemberState).Append("\n");
            sb.Append("  Pay: ").Append(Pay).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("  Position: ").Append(Position).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}