using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolFeaturedModesQueue
    {
        [DataMember(Name = "category")]
        public LolFeaturedModesQueueGameCategory Category { get; set; }

        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "gameMutator")]
        public string GameMutator { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "lastToggledOffTime")]
        public ulong LastToggledOffTime { get; set; }

        [DataMember(Name = "lastToggledOnTime")]
        public ulong LastToggledOnTime { get; set; }

        [DataMember(Name = "mapId")]
        public int MapId { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "queueAvailability")]
        public LolFeaturedModesQueueAvailability QueueAvailability { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolFeaturedModesQueue {\n");
            sb.Append("  Category: ").Append(Category).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameMutator: ").Append(GameMutator).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LastToggledOffTime: ").Append(LastToggledOffTime).Append("\n");
            sb.Append("  LastToggledOnTime: ").Append(LastToggledOnTime).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}