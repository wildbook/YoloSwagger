using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameQueuesQueueCustomGame
    {
        [DataMember(Name = "gameServerRegions")]
        public string[] GameServerRegions { get; set; }

        [DataMember(Name = "queueAvailability")]
        public LolGameQueuesQueueAvailability QueueAvailability { get; set; }

        [DataMember(Name = "spectatorPolicies")]
        public LolGameQueuesQueueCustomGameSpectatorPolicy[] SpectatorPolicies { get; set; }

        [DataMember(Name = "spectatorSlotLimit")]
        public uint SpectatorSlotLimit { get; set; }

        [DataMember(Name = "subcategories")]
        public LolGameQueuesQueueCustomGameSubcategory[] Subcategories { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameQueuesQueueCustomGame {\n");
            sb.Append("  GameServerRegions: ").Append(GameServerRegions).Append("\n");
            sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
            sb.Append("  SpectatorPolicies: ").Append(SpectatorPolicies).Append("\n");
            sb.Append("  SpectatorSlotLimit: ").Append(SpectatorSlotLimit).Append("\n");
            sb.Append("  Subcategories: ").Append(Subcategories).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}