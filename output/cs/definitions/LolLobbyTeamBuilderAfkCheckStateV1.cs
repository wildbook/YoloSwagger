using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderAfkCheckStateV1
    {
        [DataMember(Name = "afkReady")]
        public bool AfkReady { get; set; }

        [DataMember(Name = "inventoryDraft")]
        public LolLobbyTeamBuilderTbdInventory InventoryDraft { get; set; }

        [DataMember(Name = "maxAfkMillis")]
        public uint MaxAfkMillis { get; set; }

        [DataMember(Name = "remainingAfkMillis")]
        public int RemainingAfkMillis { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderAfkCheckStateV1 {\n");
            sb.Append("  AfkReady: ").Append(AfkReady).Append("\n");
            sb.Append("  InventoryDraft: ").Append(InventoryDraft).Append("\n");
            sb.Append("  MaxAfkMillis: ").Append(MaxAfkMillis).Append("\n");
            sb.Append("  RemainingAfkMillis: ").Append(RemainingAfkMillis).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}