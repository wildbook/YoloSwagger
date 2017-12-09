using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyMatchmakingLowPriorityDataResource
    {
        [DataMember(Name = "bustedLeaverAccessToken")]
        public string BustedLeaverAccessToken { get; set; }

        [DataMember(Name = "penalizedSummonerIds")]
        public ulong[] PenalizedSummonerIds { get; set; }

        [DataMember(Name = "penaltyTime")]
        public double PenaltyTime { get; set; }

        [DataMember(Name = "penaltyTimeRemaining")]
        public double PenaltyTimeRemaining { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyMatchmakingLowPriorityDataResource {\n");
            sb.Append("  BustedLeaverAccessToken: ").Append(BustedLeaverAccessToken).Append("\n");
            sb.Append("  PenalizedSummonerIds: ").Append(PenalizedSummonerIds).Append("\n");
            sb.Append("  PenaltyTime: ").Append(PenaltyTime).Append("\n");
            sb.Append("  PenaltyTimeRemaining: ").Append(PenaltyTimeRemaining).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}