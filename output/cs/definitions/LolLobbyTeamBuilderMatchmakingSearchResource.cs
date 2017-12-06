using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderMatchmakingSearchResource
    {
        [DataMember(Name = "dodgeData")]
        LolLobbyTeamBuilderMatchmakingDodgeData DodgeData { get; set; }

        [DataMember(Name = "errors")]
        LolLobbyTeamBuilderMatchmakingSearchErrorResource[] Errors { get; set; }

        [DataMember(Name = "estimatedQueueTime")]
        float EstimatedQueueTime { get; set; }

        [DataMember(Name = "isCurrentlyInQueue")]
        bool IsCurrentlyInQueue { get; set; }

        [DataMember(Name = "lobbyId")]
        string LobbyId { get; set; }

        [DataMember(Name = "lowPriorityData")]
        LolLobbyTeamBuilderMatchmakingLowPriorityData LowPriorityData { get; set; }

        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        [DataMember(Name = "readyCheck")]
        LolLobbyTeamBuilderMatchmakingReadyCheckResource ReadyCheck { get; set; }

        [DataMember(Name = "searchState")]
        LolLobbyTeamBuilderMatchmakingSearchState SearchState { get; set; }

        [DataMember(Name = "timeInQueue")]
        float TimeInQueue { get; set; }

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