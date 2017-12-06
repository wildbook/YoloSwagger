using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MatchmakingLcdsSearchingForMatchNotification
    {
        [DataMember(Name = "joinedQueues")]
        MatchmakingLcdsQueueInfo[] JoinedQueues { get; set; }

        [DataMember(Name = "playerJoinFailures")]
        dynamic[] PlayerJoinFailures { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsSearchingForMatchNotification {\n");
            sb.Append("  JoinedQueues: ").Append(JoinedQueues).Append("\n");
            sb.Append("  PlayerJoinFailures: ").Append(PlayerJoinFailures).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}