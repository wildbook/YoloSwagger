using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderTBDMatchmakingState
    {
        [DataMember(Name = "backwardsTransitionReason")]
        public string BackwardsTransitionReason { get; set; }

        [DataMember(Name = "estimatedMatchmakingTimeMillis")]
        public long EstimatedMatchmakingTimeMillis { get; set; }

        [DataMember(Name = "timeInMatchmakingMillis")]
        public long TimeInMatchmakingMillis { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTBDMatchmakingState {\n");
            sb.Append("  BackwardsTransitionReason: ").Append(BackwardsTransitionReason).Append("\n");
            sb.Append("  EstimatedMatchmakingTimeMillis: ").Append(EstimatedMatchmakingTimeMillis).Append("\n");
            sb.Append("  TimeInMatchmakingMillis: ").Append(TimeInMatchmakingMillis).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}