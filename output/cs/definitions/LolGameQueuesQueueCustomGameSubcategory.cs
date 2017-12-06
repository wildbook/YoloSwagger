using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolGameQueuesQueueCustomGameSubcategory
    {
        [DataMember(Name = "gameMode")]
        string GameMode { get; set; }

        [DataMember(Name = "gameMutator")]
        string GameMutator { get; set; }

        [DataMember(Name = "mapId")]
        int MapId { get; set; }

        [DataMember(Name = "maxLevel")]
        uint MaxLevel { get; set; }

        [DataMember(Name = "maxPlayerCount")]
        int MaxPlayerCount { get; set; }

        [DataMember(Name = "maximumParticipantListSize")]
        int MaximumParticipantListSize { get; set; }

        [DataMember(Name = "minLevel")]
        uint MinLevel { get; set; }

        [DataMember(Name = "minimumParticipantListSize")]
        int MinimumParticipantListSize { get; set; }

        [DataMember(Name = "mutators")]
        LolGameQueuesQueueGameTypeConfig[] Mutators { get; set; }

        [DataMember(Name = "numPlayersPerTeam")]
        int NumPlayersPerTeam { get; set; }

        [DataMember(Name = "queueAvailability")]
        LolGameQueuesQueueAvailability QueueAvailability { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameQueuesQueueCustomGameSubcategory {\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameMutator: ").Append(GameMutator).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  MaxLevel: ").Append(MaxLevel).Append("\n");
            sb.Append("  MaxPlayerCount: ").Append(MaxPlayerCount).Append("\n");
            sb.Append("  MaximumParticipantListSize: ").Append(MaximumParticipantListSize).Append("\n");
            sb.Append("  MinLevel: ").Append(MinLevel).Append("\n");
            sb.Append("  MinimumParticipantListSize: ").Append(MinimumParticipantListSize).Append("\n");
            sb.Append("  Mutators: ").Append(Mutators).Append("\n");
            sb.Append("  NumPlayersPerTeam: ").Append(NumPlayersPerTeam).Append("\n");
            sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}