using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PendingRosterMemberDTO
    {
        [DataMember(Name = "playerId")]
        ulong PlayerId { get; set; }

        [DataMember(Name = "pay")]
        int Pay { get; set; }

        [DataMember(Name = "memberState")]
        PendingRosterMemberState MemberState { get; set; }

        [DataMember(Name = "position")]
        Position Position { get; set; }

        [DataMember(Name = "joinTime")]
        long JoinTime { get; set; }

        [DataMember(Name = "bet")]
        int Bet { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PendingRosterMemberDTO {\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("  Pay: ").Append(Pay).Append("\n");
            sb.Append("  MemberState: ").Append(MemberState).Append("\n");
            sb.Append("  Position: ").Append(Position).Append("\n");
            sb.Append("  JoinTime: ").Append(JoinTime).Append("\n");
            sb.Append("  Bet: ").Append(Bet).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}