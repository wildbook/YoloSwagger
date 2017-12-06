using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolFeaturedModesQueue
    {
        [DataMember(Name = "category")]
        LolFeaturedModesQueueGameCategory Category { get; set; }

        [DataMember(Name = "gameMode")]
        string GameMode { get; set; }

        [DataMember(Name = "gameMutator")]
        string GameMutator { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "lastToggledOffTime")]
        ulong LastToggledOffTime { get; set; }

        [DataMember(Name = "lastToggledOnTime")]
        ulong LastToggledOnTime { get; set; }

        [DataMember(Name = "mapId")]
        int MapId { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "queueAvailability")]
        LolFeaturedModesQueueAvailability QueueAvailability { get; set; }

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