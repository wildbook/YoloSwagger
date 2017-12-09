using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameQueuesQueueCustomGameSubcategory
    {
        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "gameMutator")]
        public string GameMutator { get; set; }

        [DataMember(Name = "mapId")]
        public int MapId { get; set; }

        [DataMember(Name = "maxLevel")]
        public uint MaxLevel { get; set; }

        [DataMember(Name = "maxPlayerCount")]
        public int MaxPlayerCount { get; set; }

        [DataMember(Name = "maximumParticipantListSize")]
        public int MaximumParticipantListSize { get; set; }

        [DataMember(Name = "minLevel")]
        public uint MinLevel { get; set; }

        [DataMember(Name = "minimumParticipantListSize")]
        public int MinimumParticipantListSize { get; set; }

        [DataMember(Name = "mutators")]
        public LolGameQueuesQueueGameTypeConfig[] Mutators { get; set; }

        [DataMember(Name = "numPlayersPerTeam")]
        public int NumPlayersPerTeam { get; set; }

        [DataMember(Name = "queueAvailability")]
        public LolGameQueuesQueueAvailability QueueAvailability { get; set; }

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