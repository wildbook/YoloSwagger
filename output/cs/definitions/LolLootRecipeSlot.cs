using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootRecipeSlot
    {
        [DataMember(Name = "lootIds")]
        string[] LootIds { get; set; }

        [DataMember(Name = "slotNumber")]
        int SlotNumber { get; set; }

        [DataMember(Name = "tags")]
        string Tags { get; set; }

        [DataMember(Name = "quantity")]
        int Quantity { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootRecipeSlot {\n");
            sb.Append("  LootIds: ").Append(LootIds).Append("\n");
            sb.Append("  SlotNumber: ").Append(SlotNumber).Append("\n");
            sb.Append("  Tags: ").Append(Tags).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}