using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolGameQueuesQueueCustomGame
    {
        [DataMember(Name = "queueAvailability")]
        LolGameQueuesQueueAvailability QueueAvailability { get; set; }

        [DataMember(Name = "spectatorSlotLimit")]
        uint SpectatorSlotLimit { get; set; }

        [DataMember(Name = "subcategories")]
        LolGameQueuesQueueCustomGameSubcategory[] Subcategories { get; set; }

        [DataMember(Name = "spectatorPolicies")]
        LolGameQueuesQueueCustomGameSpectatorPolicy[] SpectatorPolicies { get; set; }

        [DataMember(Name = "gameServerRegions")]
        string[] GameServerRegions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameQueuesQueueCustomGame {\n");
            sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
            sb.Append("  SpectatorSlotLimit: ").Append(SpectatorSlotLimit).Append("\n");
            sb.Append("  Subcategories: ").Append(Subcategories).Append("\n");
            sb.Append("  SpectatorPolicies: ").Append(SpectatorPolicies).Append("\n");
            sb.Append("  GameServerRegions: ").Append(GameServerRegions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}