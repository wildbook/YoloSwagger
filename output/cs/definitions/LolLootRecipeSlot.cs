using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootRecipeSlot
    {
        [DataMember(Name = "lootIds")]
        public string[] LootIds { get; set; }

        [DataMember(Name = "quantity")]
        public int Quantity { get; set; }

        [DataMember(Name = "slotNumber")]
        public int SlotNumber { get; set; }

        [DataMember(Name = "tags")]
        public string Tags { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootRecipeSlot {\n");
            sb.Append("  LootIds: ").Append(LootIds).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("  SlotNumber: ").Append(SlotNumber).Append("\n");
            sb.Append("  Tags: ").Append(Tags).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}