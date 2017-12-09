using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderTbLobbyStateResource
    {
        [DataMember(Name = "afkCheckState")]
        public LolLobbyTeamBuilderAfkCheckStateV1? AfkCheckState { get; set; }

        [DataMember(Name = "championSelectState")]
        public LolLobbyTeamBuilderChampionSelectStateV1? ChampionSelectState { get; set; }

        [DataMember(Name = "counter")]
        public int Counter { get; set; }

        [DataMember(Name = "matchmakingState")]
        public LolLobbyTeamBuilderTBDMatchmakingState? MatchmakingState { get; set; }

        [DataMember(Name = "phaseName")]
        public string PhaseName { get; set; }

        [DataMember(Name = "premadeState")]
        public LolLobbyTeamBuilderTbLobbyPremadeStateResource? PremadeState { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTbLobbyStateResource {\n");
            sb.Append("  AfkCheckState: ").Append(AfkCheckState).Append("\n");
            sb.Append("  ChampionSelectState: ").Append(ChampionSelectState).Append("\n");
            sb.Append("  Counter: ").Append(Counter).Append("\n");
            sb.Append("  MatchmakingState: ").Append(MatchmakingState).Append("\n");
            sb.Append("  PhaseName: ").Append(PhaseName).Append("\n");
            sb.Append("  PremadeState: ").Append(PremadeState).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}