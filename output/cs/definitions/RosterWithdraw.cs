using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RosterWithdraw
    {
        [DataMember(Name = "voteWithdrawMembers")]
        long[] VoteWithdrawMembers { get; set; }

        [DataMember(Name = "gameStartBufferMs")]
        long GameStartBufferMs { get; set; }

        [DataMember(Name = "initVoteMember")]
        ulong InitVoteMember { get; set; }

        [DataMember(Name = "declineWithdrawMembers")]
        long[] DeclineWithdrawMembers { get; set; }

        [DataMember(Name = "lockoutTimeMs")]
        long LockoutTimeMs { get; set; }

        [DataMember(Name = "voteTimeoutMs")]
        long VoteTimeoutMs { get; set; }

        [DataMember(Name = "initVoteTime")]
        long InitVoteTime { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterWithdraw {\n");
            sb.Append("  VoteWithdrawMembers: ").Append(VoteWithdrawMembers).Append("\n");
            sb.Append("  GameStartBufferMs: ").Append(GameStartBufferMs).Append("\n");
            sb.Append("  InitVoteMember: ").Append(InitVoteMember).Append("\n");
            sb.Append("  DeclineWithdrawMembers: ").Append(DeclineWithdrawMembers).Append("\n");
            sb.Append("  LockoutTimeMs: ").Append(LockoutTimeMs).Append("\n");
            sb.Append("  VoteTimeoutMs: ").Append(VoteTimeoutMs).Append("\n");
            sb.Append("  InitVoteTime: ").Append(InitVoteTime).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}