using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RosterWithdraw
    {
        [DataMember(Name = "declineWithdrawMembers")]
        public long[] DeclineWithdrawMembers { get; set; }

        [DataMember(Name = "gameStartBufferMs")]
        public long GameStartBufferMs { get; set; }

        [DataMember(Name = "initVoteMember")]
        public ulong InitVoteMember { get; set; }

        [DataMember(Name = "initVoteTime")]
        public long InitVoteTime { get; set; }

        [DataMember(Name = "lockoutTimeMs")]
        public long LockoutTimeMs { get; set; }

        [DataMember(Name = "voteTimeoutMs")]
        public long VoteTimeoutMs { get; set; }

        [DataMember(Name = "voteWithdrawMembers")]
        public long[] VoteWithdrawMembers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterWithdraw {\n");
            sb.Append("  DeclineWithdrawMembers: ").Append(DeclineWithdrawMembers).Append("\n");
            sb.Append("  GameStartBufferMs: ").Append(GameStartBufferMs).Append("\n");
            sb.Append("  InitVoteMember: ").Append(InitVoteMember).Append("\n");
            sb.Append("  InitVoteTime: ").Append(InitVoteTime).Append("\n");
            sb.Append("  LockoutTimeMs: ").Append(LockoutTimeMs).Append("\n");
            sb.Append("  VoteTimeoutMs: ").Append(VoteTimeoutMs).Append("\n");
            sb.Append("  VoteWithdrawMembers: ").Append(VoteWithdrawMembers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}