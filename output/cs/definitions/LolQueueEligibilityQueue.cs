using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolQueueEligibilityQueue
    {
        [DataMember(Name = "areFreeChampionsAllowed")]
        public bool AreFreeChampionsAllowed { get; set; }

        [DataMember(Name = "championsRequiredToPlay")]
        public uint ChampionsRequiredToPlay { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "isRanked")]
        public bool IsRanked { get; set; }

        [DataMember(Name = "maxLevel")]
        public uint MaxLevel { get; set; }

        [DataMember(Name = "maximumParticipantListSize")]
        public int MaximumParticipantListSize { get; set; }

        [DataMember(Name = "minLevel")]
        public uint MinLevel { get; set; }

        [DataMember(Name = "numPlayersPerTeam")]
        public int NumPlayersPerTeam { get; set; }

        [DataMember(Name = "queueAvailability")]
        public LolQueueEligibilityQueueAvailability QueueAvailability { get; set; }

        [DataMember(Name = "showPositionSelector")]
        public bool ShowPositionSelector { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolQueueEligibilityQueue {\n");
            sb.Append("  AreFreeChampionsAllowed: ").Append(AreFreeChampionsAllowed).Append("\n");
            sb.Append("  ChampionsRequiredToPlay: ").Append(ChampionsRequiredToPlay).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsRanked: ").Append(IsRanked).Append("\n");
            sb.Append("  MaxLevel: ").Append(MaxLevel).Append("\n");
            sb.Append("  MaximumParticipantListSize: ").Append(MaximumParticipantListSize).Append("\n");
            sb.Append("  MinLevel: ").Append(MinLevel).Append("\n");
            sb.Append("  NumPlayersPerTeam: ").Append(NumPlayersPerTeam).Append("\n");
            sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
            sb.Append("  ShowPositionSelector: ").Append(ShowPositionSelector).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}