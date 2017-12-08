using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchmakingMatchmakingSearchResource
    {
        [DataMember(Name = "lobbyId")]
        string LobbyId { get; set; }

        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        [DataMember(Name = "errors")]
        LolMatchmakingMatchmakingSearchErrorResource[] Errors { get; set; }

        [DataMember(Name = "timeInQueue")]
        float TimeInQueue { get; set; }

        [DataMember(Name = "lowPriorityData")]
        LolMatchmakingMatchmakingLowPriorityData LowPriorityData { get; set; }

        [DataMember(Name = "dodgeData")]
        LolMatchmakingMatchmakingDodgeData DodgeData { get; set; }

        [DataMember(Name = "isCurrentlyInQueue")]
        bool IsCurrentlyInQueue { get; set; }

        [DataMember(Name = "readyCheck")]
        LolMatchmakingMatchmakingReadyCheckResource ReadyCheck { get; set; }

        [DataMember(Name = "estimatedQueueTime")]
        float EstimatedQueueTime { get; set; }

        [DataMember(Name = "searchState")]
        LolMatchmakingMatchmakingSearchState SearchState { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchmakingMatchmakingSearchResource {\n");
            sb.Append("  LobbyId: ").Append(LobbyId).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  Errors: ").Append(Errors).Append("\n");
            sb.Append("  TimeInQueue: ").Append(TimeInQueue).Append("\n");
            sb.Append("  LowPriorityData: ").Append(LowPriorityData).Append("\n");
            sb.Append("  DodgeData: ").Append(DodgeData).Append("\n");
            sb.Append("  IsCurrentlyInQueue: ").Append(IsCurrentlyInQueue).Append("\n");
            sb.Append("  ReadyCheck: ").Append(ReadyCheck).Append("\n");
            sb.Append("  EstimatedQueueTime: ").Append(EstimatedQueueTime).Append("\n");
            sb.Append("  SearchState: ").Append(SearchState).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}