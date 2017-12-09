using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderMatchmakingSearchResource
    {
        [DataMember(Name = "dodgeData")]
        public LolLobbyTeamBuilderMatchmakingDodgeData DodgeData { get; set; }

        [DataMember(Name = "errors")]
        public LolLobbyTeamBuilderMatchmakingSearchErrorResource[] Errors { get; set; }

        [DataMember(Name = "estimatedQueueTime")]
        public float EstimatedQueueTime { get; set; }

        [DataMember(Name = "isCurrentlyInQueue")]
        public bool IsCurrentlyInQueue { get; set; }

        [DataMember(Name = "lobbyId")]
        public string LobbyId { get; set; }

        [DataMember(Name = "lowPriorityData")]
        public LolLobbyTeamBuilderMatchmakingLowPriorityData LowPriorityData { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        [DataMember(Name = "readyCheck")]
        public LolLobbyTeamBuilderMatchmakingReadyCheckResource ReadyCheck { get; set; }

        [DataMember(Name = "searchState")]
        public LolLobbyTeamBuilderMatchmakingSearchState SearchState { get; set; }

        [DataMember(Name = "timeInQueue")]
        public float TimeInQueue { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderMatchmakingSearchResource {\n");
            sb.Append("  DodgeData: ").Append(DodgeData).Append("\n");
            sb.Append("  Errors: ").Append(Errors).Append("\n");
            sb.Append("  EstimatedQueueTime: ").Append(EstimatedQueueTime).Append("\n");
            sb.Append("  IsCurrentlyInQueue: ").Append(IsCurrentlyInQueue).Append("\n");
            sb.Append("  LobbyId: ").Append(LobbyId).Append("\n");
            sb.Append("  LowPriorityData: ").Append(LowPriorityData).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  ReadyCheck: ").Append(ReadyCheck).Append("\n");
            sb.Append("  SearchState: ").Append(SearchState).Append("\n");
            sb.Append("  TimeInQueue: ").Append(TimeInQueue).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}